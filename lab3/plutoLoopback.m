%User tunable (samplesPerSymbol >= decimation)
samplesperSymbol = 12; %upsampling factor
decimation = 4;

%set up radio
tx = sdrtx('Pluto', 'Gain', -20);
rx = sdrrx('Pluto', 'SamplesPerFrame', 1e6, 'OutputDataType', 'double');

% Create binary data
data = randi([0 1], 2 ^ 15, 1);

% Create a QPSK modulator System Object and modulate data
qpskMod = comm.QPSKModulator('BitInput', true); %defaulted to false
modData = qpskMod(data); 

% Set up filters
rctFilt = comm.RaisedCosineTransmitFilter('OutputSamplesPerSymbol', samplesperSymbol);
rcrFilt = comm.RaisedCosineReceiveFilter('InputSamplesPerSymbol', samplesperSymbol, 'DecimationFactor', decimation);

% Passs data through radio
tx.transmitRepeat(rctFilt(modData));
data = rcrFilt(rx());

% Set up visualization and delay objects
VFD = dsp.VariableFractionalDelay;
cd = comm.ConstellationDiagram;

% Process received data for timing offset
remainingSPS = samplesperSymbol/decimation;

% Grab end of data where AGC has converged
data = data(end-remainingSPS*1000+1:end);

for index = 0:300
    % Delay Signal
    tau_hat = 0.5;
    delayedsig = VFD(data, tau_hat);
    % Linear interpolation
    o = sum(reshape(delayedsig, remainingSPS, length(delayedsig)/ remainingSPS).',2)./remainingSPS;
    cd(o);
    pause(0.1);
end
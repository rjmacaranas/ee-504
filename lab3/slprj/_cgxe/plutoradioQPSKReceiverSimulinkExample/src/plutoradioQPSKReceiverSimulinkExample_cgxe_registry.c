#define S_FUNCTION_LEVEL               2
#define S_FUNCTION_NAME                plutoradioQPSKReceiverSimulinkExample_cgxe
#include "simstruc.h"
#include "plutoradioQPSKReceiverSimulinkExample_cgxe.h"
#define MDL_START

static void mdlStart(SimStruct* S)
{
  unsigned int success;
  success = cgxe_plutoradioQPSKReceiverSimulinkExample_method_dispatcher(S,
    SS_CALL_MDL_START, NULL);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }
}

#define MDL_INITIALIZE_CONDITIONS

static void mdlInitializeConditions(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlInitializeConditions method directly.\n");
}

#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlUpdate method directly.\n");
}

static void mdlOutputs(SimStruct* S, int_T tid)
{
  mexPrintf("ERROR: Calling model mdlOutputs method directly.\n");
}

static void mdlTerminate(SimStruct *S)
{
  mexPrintf("ERROR: Calling model mdlTerminate method directly.\n");
}

static void mdlInitializeSizes(SimStruct *S)
{
}

static void mdlInitializeSampleTimes(SimStruct *S)
{
}

static mxArray* cgxe_get_supported_modules(void)
{
  mxArray* mxModules = mxCreateCellMatrix(4, 1);
  mxArray* mxChksum = NULL;
  uint32_T* checksumData = NULL;
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 332827623;
  checksumData[1] = 2692480462;
  checksumData[2] = 2472143049;
  checksumData[3] = 59065632;
  mxSetCell(mxModules, 0, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 839965583;
  checksumData[1] = 642184756;
  checksumData[2] = 2423415161;
  checksumData[3] = 3069956855;
  mxSetCell(mxModules, 1, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 1891306238;
  checksumData[1] = 2610216589;
  checksumData[2] = 1845398193;
  checksumData[3] = 676202224;
  mxSetCell(mxModules, 2, mxChksum);
  mxChksum = mxCreateNumericMatrix(1, 4, mxUINT32_CLASS, mxREAL);
  checksumData = (uint32_T*) mxGetData(mxChksum);
  checksumData[0] = 3544369978;
  checksumData[1] = 2755323151;
  checksumData[2] = 235411306;
  checksumData[3] = 337104544;
  mxSetCell(mxModules, 3, mxChksum);
  return mxModules;
}

static int cgxe_process_get_checksums(int nlhs, mxArray* plhs[], int nrhs, const
  mxArray* prhs[])
{
  const char* checksumFields[] = { "modules", "model", "makefile", "target",
    "overall" };

  mxArray* mxChecksum = mxCreateStructMatrix(1, 1, 5, checksumFields);
  mxSetField(mxChecksum, 0, "modules", cgxe_get_supported_modules());

  {
    mxArray* mxModelChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxModelChksum);
    checksumData[0] = 3155546147;
    checksumData[1] = 1246981667;
    checksumData[2] = 862080902;
    checksumData[3] = 3886693275;
    mxSetField(mxChecksum, 0, "model", mxModelChksum);
  }

  {
    mxArray* mxMakefileChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxMakefileChksum);
    checksumData[0] = 3539732072;
    checksumData[1] = 3499237224;
    checksumData[2] = 163204541;
    checksumData[3] = 2858191065;
    mxSetField(mxChecksum, 0, "makefile", mxMakefileChksum);
  }

  {
    mxArray* mxTargetChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxTargetChksum);
    checksumData[0] = 2911221907;
    checksumData[1] = 2308967934;
    checksumData[2] = 2419390157;
    checksumData[3] = 1906300239;
    mxSetField(mxChecksum, 0, "target", mxTargetChksum);
  }

  {
    mxArray* mxOverallChksum = mxCreateDoubleMatrix(1, 4, mxREAL);
    double* checksumData = (double*) mxGetData(mxOverallChksum);
    checksumData[0] = 866304553;
    checksumData[1] = 3682059097;
    checksumData[2] = 661318079;
    checksumData[3] = 3545828115;
    mxSetField(mxChecksum, 0, "overall", mxOverallChksum);
  }

  plhs[0] = mxChecksum;
  return 1;
}

static int cgxe_mex_unlock_call(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  while (mexIsLocked()) {
    mexUnlock();
  }

  return 1;
}

static SimStruct* cgxe_unpack_simstruct(const mxArray *mxS)
{
  uint32_T *uintPtr = (uint32_T*)malloc(sizeof(SimStruct*));
  int nEl = sizeof(SimStruct*)/sizeof(uint32_T);
  uint32_T *uintDataPtr = (uint32_T *)mxGetData(mxS);
  int el;
  SimStruct *S;
  for (el=0; el < nEl; el++) {
    uintPtr[el] = uintDataPtr[el];
  }

  memcpy(&S,uintPtr,sizeof(SimStruct*));
  free(uintPtr);
  return S;
}

static int cgxe_get_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_plutoradioQPSKReceiverSimulinkExample_method_dispatcher(S,
    SS_CALL_MDL_GET_SIM_STATE, (void *) (plhs));
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_set_sim_state(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  unsigned int success;
  SimStruct *S = cgxe_unpack_simstruct(prhs[1]);
  success = cgxe_plutoradioQPSKReceiverSimulinkExample_method_dispatcher(S,
    SS_CALL_MDL_SET_SIM_STATE, (void *) prhs[2]);
  if (!success) {
    /* error */
    mexPrintf("ERROR: Failed to dispatch s-function method!\n");
  }

  return 1;
}

static int cgxe_get_BuildInfoUpdate(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "RpNfljt9ezw1bujKbI0k9E") == 0) {
    extern mxArray *cgxe_RpNfljt9ezw1bujKbI0k9E_BuildInfoUpdate(void);
    plhs[0] = cgxe_RpNfljt9ezw1bujKbI0k9E_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "uLCm2mNFFZxnk8m6CQ2HWH") == 0) {
    extern mxArray *cgxe_uLCm2mNFFZxnk8m6CQ2HWH_BuildInfoUpdate(void);
    plhs[0] = cgxe_uLCm2mNFFZxnk8m6CQ2HWH_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "EL5ZCEnMbQ0wahEBnxIi4G") == 0) {
    extern mxArray *cgxe_EL5ZCEnMbQ0wahEBnxIi4G_BuildInfoUpdate(void);
    plhs[0] = cgxe_EL5ZCEnMbQ0wahEBnxIi4G_BuildInfoUpdate();
    return 1;
  }

  if (strcmp(tpChksum, "FptlJXH8cK784Mkpa3oqGG") == 0) {
    extern mxArray *cgxe_FptlJXH8cK784Mkpa3oqGG_BuildInfoUpdate(void);
    plhs[0] = cgxe_FptlJXH8cK784Mkpa3oqGG_BuildInfoUpdate();
    return 1;
  }

  return 0;
}

static int cgxe_get_fallback_info(int nlhs, mxArray * plhs[], int nrhs, const
  mxArray * prhs[])
{
  char tpChksum[64];
  mxGetString(prhs[1], tpChksum,sizeof(tpChksum)/sizeof(char));
  tpChksum[(sizeof(tpChksum)/sizeof(char)-1)] = '\0';
  if (strcmp(tpChksum, "RpNfljt9ezw1bujKbI0k9E") == 0) {
    extern mxArray *cgxe_RpNfljt9ezw1bujKbI0k9E_fallback_info(void);
    plhs[0] = cgxe_RpNfljt9ezw1bujKbI0k9E_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "uLCm2mNFFZxnk8m6CQ2HWH") == 0) {
    extern mxArray *cgxe_uLCm2mNFFZxnk8m6CQ2HWH_fallback_info(void);
    plhs[0] = cgxe_uLCm2mNFFZxnk8m6CQ2HWH_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "EL5ZCEnMbQ0wahEBnxIi4G") == 0) {
    extern mxArray *cgxe_EL5ZCEnMbQ0wahEBnxIi4G_fallback_info(void);
    plhs[0] = cgxe_EL5ZCEnMbQ0wahEBnxIi4G_fallback_info();
    return 1;
  }

  if (strcmp(tpChksum, "FptlJXH8cK784Mkpa3oqGG") == 0) {
    extern mxArray *cgxe_FptlJXH8cK784Mkpa3oqGG_fallback_info(void);
    plhs[0] = cgxe_FptlJXH8cK784Mkpa3oqGG_fallback_info();
    return 1;
  }

  return 0;
}

#define PROCESS_MEX_SFUNCTION_CMD_LINE_CALL

static int ProcessMexSfunctionCmdLineCall(int nlhs, mxArray* plhs[], int nrhs,
  const mxArray* prhs[])
{
  char commandName[64];
  if (nrhs < 1 || !mxIsChar(prhs[0]))
    return 0;
  mxGetString(prhs[0], commandName, sizeof(commandName)/sizeof(char));
  commandName[(sizeof(commandName)/sizeof(char)-1)] = '\0';
  if (strcmp(commandName, "get_checksums") == 0) {
    return cgxe_process_get_checksums(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "mex_unlock") == 0) {
    return cgxe_mex_unlock_call(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_sim_state") == 0) {
    return cgxe_get_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "set_sim_state") == 0) {
    return cgxe_set_sim_state(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_BuildInfoUpdate") == 0) {
    return cgxe_get_BuildInfoUpdate(nlhs, plhs, nrhs, prhs);
  }

  if (strcmp(commandName, "get_fallback_info") == 0) {
    return cgxe_get_fallback_info(nlhs, plhs, nrhs, prhs);
  }

  return 0;
}

#include "simulink.c"

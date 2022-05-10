/* Include files */

#include "plutoradioQPSKReceiverSimulinkExample_cgxe.h"
#include "m_RpNfljt9ezw1bujKbI0k9E.h"
#include "m_uLCm2mNFFZxnk8m6CQ2HWH.h"
#include "m_EL5ZCEnMbQ0wahEBnxIi4G.h"
#include "m_FptlJXH8cK784Mkpa3oqGG.h"

unsigned int cgxe_plutoradioQPSKReceiverSimulinkExample_method_dispatcher
  (SimStruct* S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 332827623 &&
      ssGetChecksum1(S) == 2692480462 &&
      ssGetChecksum2(S) == 2472143049 &&
      ssGetChecksum3(S) == 59065632) {
    method_dispatcher_RpNfljt9ezw1bujKbI0k9E(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 839965583 &&
      ssGetChecksum1(S) == 642184756 &&
      ssGetChecksum2(S) == 2423415161 &&
      ssGetChecksum3(S) == 3069956855) {
    method_dispatcher_uLCm2mNFFZxnk8m6CQ2HWH(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 1891306238 &&
      ssGetChecksum1(S) == 2610216589 &&
      ssGetChecksum2(S) == 1845398193 &&
      ssGetChecksum3(S) == 676202224) {
    method_dispatcher_EL5ZCEnMbQ0wahEBnxIi4G(S, method, data);
    return 1;
  }

  if (ssGetChecksum0(S) == 3544369978 &&
      ssGetChecksum1(S) == 2755323151 &&
      ssGetChecksum2(S) == 235411306 &&
      ssGetChecksum3(S) == 337104544) {
    method_dispatcher_FptlJXH8cK784Mkpa3oqGG(S, method, data);
    return 1;
  }

  return 0;
}

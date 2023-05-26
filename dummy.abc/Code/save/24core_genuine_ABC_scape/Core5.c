/**
 * @file Core5.c
 * @generated by CPrinter
 * @date Thu May 25 15:09:14 CEST 2023
 *
 * Code generated for processing element Core5 (ID=5).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern uchar *const outA__outA_0__0;  // A_0_outA > implode_A_end_outA_outA_outA_0 size:= 20*uchar defined in Core0
extern char *const A_0__implode_A_end_outA_outA__0;  // A_0 > implode_A_end_outA_outA size:= 20*char defined in Core0
extern char Shared[312]; //  size:= 312*char
extern char *const FIFO_Head_B_19_end_back__B_20_init_feed__0; // FIFO_Head_B_19_end_back > B_20_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__4;  // B_20_init_feed_feed > B_20_0_feed size:= 1*uchar defined in Core0
extern char *const B_20_init_feed__B_20_0__0;  // B_20_init_feed > B_20_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_39_end_back__OB_0_init_feed__0; // FIFO_Head_B_39_end_back > OB_0_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__24;  // OB_0_init_feed_feed > OB_0_0_feed size:= 1*uchar defined in Core0
extern char *const OB_0_init_feed__OB_0_0__0;  // OB_0_init_feed > OB_0_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_jn_end_out__OC_init_inC__0; // FIFO_Head_jn_end_out > OC_init_inC size:= 10*char defined in Core0
extern uchar *const inC__inC__0;  // OC_init_inC_inC > explode_OC_init_inC_inC_inC size:= 10*uchar defined in Core0
extern uchar *const inC_0__inC__0;  // explode_OC_init_inC_inC_inC_0 > OC_0_inC size:= 6*uchar defined in Core0
extern uchar *const inC_1__inC_0__0; // explode_OC_init_inC_inC_inC_1 > implode_OC_1_inC_inC_0 size:= 4*uchar defined in Core0
extern char *const explode_OC_init_inC_inC__OC_0__0;  // explode_OC_init_inC_inC > OC_0 size:= 6*char defined in Core0
extern char *const explode_OC_init_inC_inC__implode_OC_1_inC__0; // explode_OC_init_inC_inC > implode_OC_1_inC size:= 4*char defined in Core0
extern char *const B_39_0__B_39_end_back__0;  // B_39_0 > B_39_end_back size:= 1*char defined in Core0
extern uchar *const back__back__22;  // B_39_0_back > B_39_end_back_back size:= 1*uchar defined in Core0
extern char *const implode_jn_end_out_out__jn_end_out__0; // implode_jn_end_out_out > jn_end_out size:= 10*char defined in Core0
extern uchar *const outB__out__0;  // implode_jn_end_out_out_outB > jn_end_out_out size:= 10*uchar defined in Core0
extern char *const B_19_0__B_19_end_back__0;  // B_19_0 > B_19_end_back size:= 1*char defined in Core0
extern uchar *const back__back__32;  // B_19_0_back > B_19_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core5(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_B_19_end_back__B_20_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_B_39_end_back__OB_0_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_jn_end_out__OC_init_inC__0, 10, NULL, 0); // 10 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    A(outA__outA_0__0); // A_0

    sendStart(5, 19); // Core5 > Core19
    sendEnd(); // Core5 > Core19
    fifoPop(feed__feed__4, FIFO_Head_B_19_end_back__B_20_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 7); // Core5 > Core7
    sendEnd(); // Core5 > Core7
    fifoPop(feed__feed__24, FIFO_Head_B_39_end_back__OB_0_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 14); // Core5 > Core14
    sendEnd(); // Core5 > Core14
    fifoPop(inC__inC__0, FIFO_Head_jn_end_out__OC_init_inC__0, 10, NULL, 0); // 10 * char
    // Fork explode_OC_init_inC_inC

    {
    }
    sendStart(5, 16); // Core5 > Core16
    sendEnd(); // Core5 > Core16
    sendStart(5, 1); // Core5 > Core1
    sendEnd(); // Core5 > Core1
    receiveStart(); // Core12 > Core5
    receiveEnd(12, 5); // Core12 > Core5
    fifoPush(back__back__22, FIFO_Head_B_39_end_back__OB_0_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core20 > Core5
    receiveEnd(20, 5); // Core20 > Core5
    fifoPush(outB__out__0, FIFO_Head_jn_end_out__OC_init_inC__0, 10, NULL, 0); // 10 * char
    receiveStart(); // Core6 > Core5
    receiveEnd(6, 5); // Core6 > Core5
    fifoPush(back__back__32, FIFO_Head_B_19_end_back__B_20_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}


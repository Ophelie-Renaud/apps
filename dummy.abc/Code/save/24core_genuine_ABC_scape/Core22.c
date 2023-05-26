/**
 * @file Core22.c
 * @generated by CPrinter
 * @date Thu May 25 15:09:14 CEST 2023
 *
 * Code generated for processing element Core22 (ID=22).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern char Shared[312]; //  size:= 312*char
extern char *const FIFO_Head_B_35_end_back__B_36_init_feed__0; // FIFO_Head_B_35_end_back > B_36_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__20;  // B_36_init_feed_feed > B_36_0_feed size:= 1*uchar defined in Core0
extern char *const B_36_init_feed__B_36_0__0;  // B_36_init_feed > B_36_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_OB_6_end_back__OB_7_init_feed__0; // FIFO_Head_OB_6_end_back > OB_7_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__31;  // OB_7_init_feed_feed > OB_7_0_feed size:= 1*uchar defined in Core0
extern char *const frk_0__OB_7_0__0;  // frk_0 > OB_7_0 size:= 2*char defined in Core0
extern uchar *const newPort_7_47__inB__0;  // frk_0_newPort_7_47 > OB_7_0_inB size:= 2*uchar defined in Core0
extern uchar *const outB__out_2__0;  // OB_7_0_outB > implode_jn_end_out_out_out_2 size:= 2*uchar defined in Core0
extern uchar *const back__back__30;  // OB_7_0_back > OB_7_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_7_0__OB_7_end_back__0;  // OB_7_0 > OB_7_end_back size:= 1*char defined in Core0
extern char *const OB_7_0__implode_jn_end_out_out__0;  // OB_7_0 > implode_jn_end_out_out size:= 2*char defined in Core0
extern char *const B_35_0__B_35_end_back__0;  // B_35_0 > B_35_end_back size:= 1*char defined in Core0
extern uchar *const back__back__18;  // B_35_0_back > B_35_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_6_0__OB_6_end_back__0;  // OB_6_0 > OB_6_end_back size:= 1*char defined in Core0
extern uchar *const back__back__29;  // OB_6_0_back > OB_6_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core22(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_B_35_end_back__B_36_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__20, FIFO_Head_B_35_end_back__B_36_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(22, 9); // Core22 > Core9
    sendEnd(); // Core22 > Core9
    fifoPop(feed__feed__31, FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core0 > Core22
    receiveEnd(0, 22); // Core0 > Core22
    B(newPort_7_47__inB__0, feed__feed__31, outB__out_2__0, back__back__30); // OB_7_0

    sendStart(22, 23); // Core22 > Core23
    sendEnd(); // Core22 > Core23
    sendStart(22, 20); // Core22 > Core20
    sendEnd(); // Core22 > Core20
    receiveStart(); // Core8 > Core22
    receiveEnd(8, 22); // Core8 > Core22
    fifoPush(back__back__18, FIFO_Head_B_35_end_back__B_36_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core21 > Core22
    receiveEnd(21, 22); // Core21 > Core22
    fifoPush(back__back__29, FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}

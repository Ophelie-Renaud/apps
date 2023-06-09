/**
 * @file Core8.c
 * @generated by CPrinter
 * @date Thu May 25 15:09:14 CEST 2023
 *
 * Code generated for processing element Core8 (ID=8).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern char Shared[312]; //  size:= 312*char
extern char *const FIFO_Head_B_21_end_back__B_22_init_feed__0; // FIFO_Head_B_21_end_back > B_22_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__6;  // B_22_init_feed_feed > B_22_0_feed size:= 1*uchar defined in Core0
extern char *const B_22_init_feed__B_22_0__0;  // B_22_init_feed > B_22_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_OB_1_end_back__OB_2_init_feed__0; // FIFO_Head_OB_1_end_back > OB_2_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__26;  // OB_2_init_feed_feed > OB_2_0_feed size:= 1*uchar defined in Core0
extern char *const OB_2_init_feed__OB_2_0__0;  // OB_2_init_feed > OB_2_0 size:= 1*char defined in Core0
extern char *const B_21_init_feed__B_21_0__0;  // B_21_init_feed > B_21_0 size:= 1*char defined in Core0
extern char *const frk_0__B_21_0__0;  // frk_0 > B_21_0 size:= 1*char defined in Core0
extern uchar *const newPort21_21__inB__0;  // frk_0_newPort21_21 > B_21_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__5;  // B_21_init_feed_feed > B_21_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_1__0;  // B_21_0_outB > implode_OC_5_inC_inC_1 size:= 1*uchar defined in Core0
extern uchar *const back__back__4;  // B_21_0_back > B_21_end_back_back size:= 1*uchar defined in Core0
extern char *const B_21_0__implode_OC_5_inC__0;  // B_21_0 > implode_OC_5_inC size:= 1*char defined in Core0
extern char *const B_28_init_feed__B_28_0__0;  // B_28_init_feed > B_28_0 size:= 1*char defined in Core0
extern char *const frk_0__B_28_0__0;  // frk_0 > B_28_0 size:= 1*char defined in Core0
extern uchar *const newPort28_28__inB__0;  // frk_0_newPort28_28 > B_28_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__12;  // B_28_init_feed_feed > B_28_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_2__1;  // B_28_0_outB > implode_OC_6_inC_inC_2 size:= 1*uchar defined in Core0
extern uchar *const back__back__11;  // B_28_0_back > B_28_end_back_back size:= 1*uchar defined in Core0
extern char *const B_28_0__B_28_end_back__0;  // B_28_0 > B_28_end_back size:= 1*char defined in Core0
extern char *const B_28_0__implode_OC_6_inC__0;  // B_28_0 > implode_OC_6_inC size:= 1*char defined in Core0
extern char *const B_35_init_feed__B_35_0__0;  // B_35_init_feed > B_35_0 size:= 1*char defined in Core0
extern char *const frk_0__B_35_0__0;  // frk_0 > B_35_0 size:= 1*char defined in Core0
extern uchar *const newPort35_35__inB__0;  // frk_0_newPort35_35 > B_35_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__19;  // B_35_init_feed_feed > B_35_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_3__2;  // B_35_0_outB > implode_OC_7_inC_inC_3 size:= 1*uchar defined in Core0
extern uchar *const back__back__18;  // B_35_0_back > B_35_end_back_back size:= 1*uchar defined in Core0
extern char *const B_35_0__B_35_end_back__0;  // B_35_0 > B_35_end_back size:= 1*char defined in Core0
extern char *const B_35_0__implode_OC_7_inC__0;  // B_35_0 > implode_OC_7_inC size:= 1*char defined in Core0
extern char *const OB_1_0__OB_1_end_back__0;  // OB_1_0 > OB_1_end_back size:= 1*char defined in Core0
extern uchar *const back__back__23;  // OB_1_0_back > OB_1_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core8(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_B_21_end_back__B_22_init_feed__0, 1, NULL, 0); // 1 * char
  fifoInit(FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__6, FIFO_Head_B_21_end_back__B_22_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(8, 9); // Core8 > Core9
    sendEnd(); // Core8 > Core9
    fifoPop(feed__feed__26, FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(8, 16); // Core8 > Core16
    sendEnd(); // Core8 > Core16
    receiveStart(); // Core7 > Core8
    receiveEnd(7, 8); // Core7 > Core8
    receiveStart(); // Core0 > Core8
    receiveEnd(0, 8); // Core0 > Core8
    B(newPort21_21__inB__0, feed__feed__5, outB__inC_1__0, back__back__4); // B_21_0

    sendStart(8, 3); // Core8 > Core3
    sendEnd(); // Core8 > Core3
    receiveStart(); // Core14 > Core8
    receiveEnd(14, 8); // Core14 > Core8
    receiveStart(); // Core0 > Core8
    receiveEnd(0, 8); // Core0 > Core8
    B(newPort28_28__inB__0, feed__feed__12, outB__inC_2__1, back__back__11); // B_28_0

    sendStart(8, 15); // Core8 > Core15
    sendEnd(); // Core8 > Core15
    sendStart(8, 2); // Core8 > Core2
    sendEnd(); // Core8 > Core2
    receiveStart(); // Core21 > Core8
    receiveEnd(21, 8); // Core21 > Core8
    receiveStart(); // Core0 > Core8
    receiveEnd(0, 8); // Core0 > Core8
    B(newPort35_35__inB__0, feed__feed__19, outB__inC_3__2, back__back__18); // B_35_0

    sendStart(8, 22); // Core8 > Core22
    sendEnd(); // Core8 > Core22
    sendStart(8, 2); // Core8 > Core2
    sendEnd(); // Core8 > Core2
    fifoPush(back__back__4, FIFO_Head_B_21_end_back__B_22_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core15 > Core8
    receiveEnd(15, 8); // Core15 > Core8
    fifoPush(back__back__23, FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}


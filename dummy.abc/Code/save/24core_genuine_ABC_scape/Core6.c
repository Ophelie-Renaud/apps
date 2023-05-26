/**
 * @file Core6.c
 * @generated by CPrinter
 * @date Thu May 25 15:09:14 CEST 2023
 *
 * Code generated for processing element Core6 (ID=6).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

extern char *const B_17_init_feed__B_17_0__0;  // B_17_init_feed > B_17_0 size:= 1*char defined in Core0
extern char *const frk_0__B_17_0__0;  // frk_0 > B_17_0 size:= 1*char defined in Core0
extern uchar *const newPort17_17__inB__0;  // frk_0_newPort17_17 > B_17_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__3;  // B_17_init_feed_feed > B_17_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_3__5;  // B_17_0_outB > implode_OC_4_inC_inC_3 size:= 1*uchar defined in Core0
extern uchar *const back__feed__1;  // B_17_0_back > B_18_0_feed size:= 1*uchar defined in Core0
extern char *const B_17_0__implode_OC_4_inC__0;  // B_17_0 > implode_OC_4_inC size:= 1*char defined in Core0
extern char *const frk_0__B_18_0__0;  // frk_0 > B_18_0 size:= 1*char defined in Core0
extern uchar *const newPort18_18__inB__0;  // frk_0_newPort18_18 > B_18_0_inB size:= 1*uchar defined in Core0
extern uchar *const outB__inC_4__4;  // B_18_0_outB > implode_OC_4_inC_inC_4 size:= 1*uchar defined in Core0
extern uchar *const back__feed__3;  // B_18_0_back > B_19_0_feed size:= 1*uchar defined in Core0
extern char *const B_18_0__implode_OC_4_inC__0;  // B_18_0 > implode_OC_4_inC size:= 1*char defined in Core0
extern char *const frk_0__B_19_0__0;  // frk_0 > B_19_0 size:= 1*char defined in Core0
extern uchar *const newPort19_19__inB__0;  // frk_0_newPort19_19 > B_19_0_inB size:= 1*uchar defined in Core0
extern uchar *const outB__inC_5__4;  // B_19_0_outB > implode_OC_4_inC_inC_5 size:= 1*uchar defined in Core0
extern uchar *const back__back__32;  // B_19_0_back > B_19_end_back_back size:= 1*uchar defined in Core0
extern char *const B_19_0__B_19_end_back__0;  // B_19_0 > B_19_end_back size:= 1*char defined in Core0
extern char *const B_19_0__implode_OC_4_inC__0;  // B_19_0 > implode_OC_4_inC size:= 1*char defined in Core0

void* computationThread_Core6(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    receiveStart(); // Core2 > Core6
    receiveEnd(2, 6); // Core2 > Core6
    receiveStart(); // Core0 > Core6
    receiveEnd(0, 6); // Core0 > Core6
    B(newPort17_17__inB__0, feed__feed__3, outB__inC_3__5, back__feed__1); // B_17_0

    sendStart(6, 0); // Core6 > Core0
    sendEnd(); // Core6 > Core0
    receiveStart(); // Core0 > Core6
    receiveEnd(0, 6); // Core0 > Core6
    B(newPort18_18__inB__0, back__feed__1, outB__inC_4__4, back__feed__3); // B_18_0

    sendStart(6, 0); // Core6 > Core0
    sendEnd(); // Core6 > Core0
    receiveStart(); // Core0 > Core6
    receiveEnd(0, 6); // Core0 > Core6
    B(newPort19_19__inB__0, back__feed__3, outB__inC_5__4, back__back__32); // B_19_0

    sendStart(6, 5); // Core6 > Core5
    sendEnd(); // Core6 > Core5
    sendStart(6, 0); // Core6 > Core0
    sendEnd(); // Core6 > Core0
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}


/**
 * @file Core0.c
 * @generated by CPrinter
 * @date Thu Jun 01 19:02:21 CEST 2023
 *
 * Code generated for processing element Core0 (ID=0).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif

// Core Global Definitions
char Shared[121]; //  size:= 121*char
char *const FIFO_Head_OB_0_end_back__OB_1_init_feed__0 = (char*) (Shared + 0); // FIFO_Head_OB_0_end_back > OB_1_init_feed size:= 1*char
char *const srcA_0__frk_0__0 = (char*) (Shared + 0);  // srcA_0 > frk_0 size:= 43*char
char *const frk_0__OB_0_0__0 = (char*) (Shared + 0);  // frk_0 > OB_0_0 size:= 2*char
char *const frk_0__OB_1_0__0 = (char*) (Shared + 2);  // frk_0 > OB_1_0 size:= 2*char
char *const frk_0__OB_2_0__0 = (char*) (Shared + 4);  // frk_0 > OB_2_0 size:= 2*char
char *const frk_0__OB_3_0__0 = (char*) (Shared + 6);  // frk_0 > OB_3_0 size:= 2*char
char *const frk_0__OB_4_0__0 = (char*) (Shared + 8);  // frk_0 > OB_4_0 size:= 2*char
char *const frk_0__OB_5_0__0 = (char*) (Shared + 10);  // frk_0 > OB_5_0 size:= 2*char
char *const frk_0__OB_6_0__0 = (char*) (Shared + 12);  // frk_0 > OB_6_0 size:= 2*char
char *const frk_0__OB_7_0__0 = (char*) (Shared + 14);  // frk_0 > OB_7_0 size:= 2*char
char *const frk_0__OB_8_0__0 = (char*) (Shared + 16);  // frk_0 > OB_8_0 size:= 2*char
char *const frk_0__OB_9_0__0 = (char*) (Shared + 18);  // frk_0 > OB_9_0 size:= 2*char
char *const src_B1_0__explode_src_B1_0_out__0 = (char*) (Shared + 43); // src_B1_0 > explode_src_B1_0_out size:= 23*char
char *const src_B0_0__explode_src_B0_0_out__0 = (char*) (Shared + 66); // src_B0_0 > explode_src_B0_0_out size:= 17*char
char *const explode_src_B0_0_out__OC_4__0 = (char*) (Shared + 83);  // explode_src_B0_0_out > OC_4 size:= 6*char
char *const explode_src_B0_0_out__OC_5__0 = (char*) (Shared + 89);  // explode_src_B0_0_out > OC_5 size:= 6*char
char *const explode_src_B1_0_out__OC_7__0 = (char*) (Shared + 66);  // explode_src_B1_0_out > OC_7 size:= 6*char
char *const explode_src_B1_0_out__OC_8__0 = (char*) (Shared + 72);  // explode_src_B1_0_out > OC_8 size:= 6*char
char *const explode_src_B1_0_out__OC_9__0 = (char*) (Shared + 95);  // explode_src_B1_0_out > OC_9 size:= 6*char
char *const implode_OC_6_inC__OC_6__0 = (char*) (Shared + 20);  // implode_OC_6_inC > OC_6 size:= 6*char
char *const implode_OC_0_inC__OC_0__0 = (char*) (Shared + 26);  // implode_OC_0_inC > OC_0 size:= 6*char
char *const OB_0_0__implode_OC_0_inC__0 = (char*) (Shared + 26);  // OB_0_0 > implode_OC_0_inC size:= 2*char
char *const OB_1_0__implode_OC_0_inC__0 = (char*) (Shared + 28);  // OB_1_0 > implode_OC_0_inC size:= 2*char
char *const OB_2_0__implode_OC_0_inC__0 = (char*) (Shared + 30);  // OB_2_0 > implode_OC_0_inC size:= 2*char
char *const implode_OC_1_inC__OC_1__0 = (char*) (Shared + 32);  // implode_OC_1_inC > OC_1 size:= 6*char
char *const OB_3_0__implode_OC_1_inC__0 = (char*) (Shared + 32);  // OB_3_0 > implode_OC_1_inC size:= 2*char
char *const OB_4_0__implode_OC_1_inC__0 = (char*) (Shared + 34);  // OB_4_0 > implode_OC_1_inC size:= 2*char
char *const OB_5_0__implode_OC_1_inC__0 = (char*) (Shared + 36);  // OB_5_0 > implode_OC_1_inC size:= 2*char
char *const implode_OC_2_inC__OC_2__0 = (char*) (Shared + 101);  // implode_OC_2_inC > OC_2 size:= 6*char
char *const OB_6_0__implode_OC_2_inC__0 = (char*) (Shared + 101);  // OB_6_0 > implode_OC_2_inC size:= 2*char
char *const OB_7_0__implode_OC_2_inC__0 = (char*) (Shared + 103);  // OB_7_0 > implode_OC_2_inC size:= 2*char
char *const OB_8_0__implode_OC_2_inC__0 = (char*) (Shared + 105);  // OB_8_0 > implode_OC_2_inC size:= 2*char
char *const implode_OC_3_inC__OC_3__0 = (char*) (Shared + 107);  // implode_OC_3_inC > OC_3 size:= 6*char
char *const OB_9_0__implode_OC_3_inC__0 = (char*) (Shared + 8);  // OB_9_0 > implode_OC_3_inC size:= 2*char
char *const OB_1_init_feed__OB_1_0__0 = (char*) (Shared + 101);  // OB_1_init_feed > OB_1_0 size:= 1*char
char *const OB_2_init_feed__OB_2_0__0 = (char*) (Shared + 103);  // OB_2_init_feed > OB_2_0 size:= 1*char
char *const OB_3_init_feed__OB_3_0__0 = (char*) (Shared + 105);  // OB_3_init_feed > OB_3_0 size:= 1*char
char *const OB_4_init_feed__OB_4_0__0 = (char*) (Shared + 107);  // OB_4_init_feed > OB_4_0 size:= 1*char
char *const OB_5_init_feed__OB_5_0__0 = (char*) (Shared + 113);  // OB_5_init_feed > OB_5_0 size:= 1*char
char *const OB_6_init_feed__OB_6_0__0 = (char*) (Shared + 108);  // OB_6_init_feed > OB_6_0 size:= 1*char
char *const OB_7_init_feed__OB_7_0__0 = (char*) (Shared + 114);  // OB_7_init_feed > OB_7_0 size:= 1*char
char *const OB_8_init_feed__OB_8_0__0 = (char*) (Shared + 115);  // OB_8_init_feed > OB_8_0 size:= 1*char
char *const OB_9_init_feed__OB_9_0__0 = (char*) (Shared + 109);  // OB_9_init_feed > OB_9_0 size:= 1*char
char *const srcD_0__OB_0_0__0 = (char*) (Shared + 116);  // srcD_0 > OB_0_0 size:= 1*char
char *const OB_0_0__OB_0_end_back__0 = (char*) (Shared + 38);  // OB_0_0 > OB_0_end_back size:= 1*char
char *const OB_1_0__OB_1_end_back__0 = (char*) (Shared + 39);  // OB_1_0 > OB_1_end_back size:= 1*char
char *const OB_2_0__OB_2_end_back__0 = (char*) (Shared + 40);  // OB_2_0 > OB_2_end_back size:= 1*char
char *const OB_3_0__OB_3_end_back__0 = (char*) (Shared + 41);  // OB_3_0 > OB_3_end_back size:= 1*char
char *const OB_4_0__OB_4_end_back__0 = (char*) (Shared + 42);  // OB_4_0 > OB_4_end_back size:= 1*char
char *const OB_5_0__OB_5_end_back__0 = (char*) (Shared + 43);  // OB_5_0 > OB_5_end_back size:= 1*char
char *const OB_6_0__OB_6_end_back__0 = (char*) (Shared + 2);  // OB_6_0 > OB_6_end_back size:= 1*char
char *const OB_7_0__OB_7_end_back__0 = (char*) (Shared + 4);  // OB_7_0 > OB_7_end_back size:= 1*char
char *const OB_8_0__OB_8_end_back__0 = (char*) (Shared + 6);  // OB_8_0 > OB_8_end_back size:= 1*char
char *const OB_9_0__get_0__0 = (char*) (Shared + 117);  // OB_9_0 > get_0 size:= 1*char
char *const explode_src_B0_0_out__implode_OC_3_inC__0 = (char*) (Shared + 0); // explode_src_B0_0_out > implode_OC_3_inC size:= 0*char
char *const explode_src_B0_0_out__implode_OC_6_inC__0 = (char*) (Shared + 0); // explode_src_B0_0_out > implode_OC_6_inC size:= 0*char
char *const explode_src_B1_0_out__implode_OC_6_inC__0 = (char*) (Shared + 0); // explode_src_B1_0_out > implode_OC_6_inC size:= 0*char
char *const FIFO_Head_OB_1_end_back__OB_2_init_feed__0 = (char*) (Shared + 72); // FIFO_Head_OB_1_end_back > OB_2_init_feed size:= 1*char
char *const FIFO_Head_OB_2_end_back__OB_3_init_feed__0 = (char*) (Shared + 44); // FIFO_Head_OB_2_end_back > OB_3_init_feed size:= 1*char
char *const FIFO_Head_OB_3_end_back__OB_4_init_feed__0 = (char*) (Shared + 118); // FIFO_Head_OB_3_end_back > OB_4_init_feed size:= 1*char
char *const FIFO_Head_OB_4_end_back__OB_5_init_feed__0 = (char*) (Shared + 113); // FIFO_Head_OB_4_end_back > OB_5_init_feed size:= 1*char
char *const FIFO_Head_OB_5_end_back__OB_6_init_feed__0 = (char*) (Shared + 73); // FIFO_Head_OB_5_end_back > OB_6_init_feed size:= 1*char
char *const FIFO_Head_OB_6_end_back__OB_7_init_feed__0 = (char*) (Shared + 45); // FIFO_Head_OB_6_end_back > OB_7_init_feed size:= 1*char
char *const FIFO_Head_OB_7_end_back__OB_8_init_feed__0 = (char*) (Shared + 119); // FIFO_Head_OB_7_end_back > OB_8_init_feed size:= 1*char
char *const FIFO_Head_OB_8_end_back__OB_9_init_feed__0 = (char*) (Shared + 120); // FIFO_Head_OB_8_end_back > OB_9_init_feed size:= 1*char
uchar *const out__in__0 = (uchar*) (Shared + 0);  // srcA_0_out > frk_0_in size:= 43*uchar
uchar *const newPort_0__inB__0 = (uchar*) (Shared + 0);  // frk_0_newPort_0 > OB_0_0_inB size:= 2*uchar
uchar *const newPort1_1__inB__0 = (uchar*) (Shared + 2);  // frk_0_newPort1_1 > OB_1_0_inB size:= 2*uchar
uchar *const newPort2_2__inB__0 = (uchar*) (Shared + 4);  // frk_0_newPort2_2 > OB_2_0_inB size:= 2*uchar
uchar *const newPort3_3__inB__0 = (uchar*) (Shared + 6);  // frk_0_newPort3_3 > OB_3_0_inB size:= 2*uchar
uchar *const newPort4_4__inB__0 = (uchar*) (Shared + 8);  // frk_0_newPort4_4 > OB_4_0_inB size:= 2*uchar
uchar *const newPort5_5__inB__0 = (uchar*) (Shared + 10);  // frk_0_newPort5_5 > OB_5_0_inB size:= 2*uchar
uchar *const newPort6_6__inB__0 = (uchar*) (Shared + 12);  // frk_0_newPort6_6 > OB_6_0_inB size:= 2*uchar
uchar *const newPort7_7__inB__0 = (uchar*) (Shared + 14);  // frk_0_newPort7_7 > OB_7_0_inB size:= 2*uchar
uchar *const newPort8_8__inB__0 = (uchar*) (Shared + 16);  // frk_0_newPort8_8 > OB_8_0_inB size:= 2*uchar
uchar *const newPort9_9__inB__0 = (uchar*) (Shared + 18);  // frk_0_newPort9_9 > OB_9_0_inB size:= 2*uchar
uchar *const out__inC__0 = (uchar*) (Shared + 43);  // src_B1_0_out > explode_src_B1_0_out_inC size:= 23*uchar
uchar *const out__inC__1 = (uchar*) (Shared + 66);  // src_B0_0_out > explode_src_B0_0_out_inC size:= 17*uchar
uchar *const out_1__inC__0 = (uchar*) (Shared + 83);  // explode_src_B0_0_out_out_1 > OC_4_inC size:= 6*uchar
uchar *const out_2__inC__0 = (uchar*) (Shared + 89);  // explode_src_B0_0_out_out_2 > OC_5_inC size:= 6*uchar
uchar *const out_1__inC__1 = (uchar*) (Shared + 66);  // explode_src_B1_0_out_out_1 > OC_7_inC size:= 6*uchar
uchar *const out_2__inC__1 = (uchar*) (Shared + 72);  // explode_src_B1_0_out_out_2 > OC_8_inC size:= 6*uchar
uchar *const out_3__inC__0 = (uchar*) (Shared + 95);  // explode_src_B1_0_out_out_3 > OC_9_inC size:= 6*uchar
uchar *const out__inC__2 = (uchar*) (Shared + 20);  // implode_OC_6_inC_out > OC_6_inC size:= 6*uchar
uchar *const outB__inC__0 = (uchar*) (Shared + 26);  // implode_OC_0_inC_outB > OC_0_inC size:= 6*uchar
uchar *const outB__inC_0__0 = (uchar*) (Shared + 26);  // OB_0_0_outB > implode_OC_0_inC_inC_0 size:= 2*uchar
uchar *const outB__inC_1__0 = (uchar*) (Shared + 28);  // OB_1_0_outB > implode_OC_0_inC_inC_1 size:= 2*uchar
uchar *const outB__inC_2__0 = (uchar*) (Shared + 30);  // OB_2_0_outB > implode_OC_0_inC_inC_2 size:= 2*uchar
uchar *const outB__inC__1 = (uchar*) (Shared + 32);  // implode_OC_1_inC_outB > OC_1_inC size:= 6*uchar
uchar *const outB__inC_0__1 = (uchar*) (Shared + 32);  // OB_3_0_outB > implode_OC_1_inC_inC_0 size:= 2*uchar
uchar *const outB__inC_1__1 = (uchar*) (Shared + 34);  // OB_4_0_outB > implode_OC_1_inC_inC_1 size:= 2*uchar
uchar *const outB__inC_2__1 = (uchar*) (Shared + 36);  // OB_5_0_outB > implode_OC_1_inC_inC_2 size:= 2*uchar
uchar *const outB__inC__2 = (uchar*) (Shared + 101);  // implode_OC_2_inC_outB > OC_2_inC size:= 6*uchar
uchar *const outB__inC_0__2 = (uchar*) (Shared + 101);  // OB_6_0_outB > implode_OC_2_inC_inC_0 size:= 2*uchar
uchar *const outB__inC_1__2 = (uchar*) (Shared + 103);  // OB_7_0_outB > implode_OC_2_inC_inC_1 size:= 2*uchar
uchar *const outB__inC_2__2 = (uchar*) (Shared + 105);  // OB_8_0_outB > implode_OC_2_inC_inC_2 size:= 2*uchar
uchar *const outB__inC__3 = (uchar*) (Shared + 107);  // implode_OC_3_inC_outB > OC_3_inC size:= 6*uchar
uchar *const outB__inC_0__3 = (uchar*) (Shared + 8);  // OB_9_0_outB > implode_OC_3_inC_inC_0 size:= 2*uchar
uchar *const feed__feed__0 = (uchar*) (Shared + 101);  // OB_1_init_feed_feed > OB_1_0_feed size:= 1*uchar
uchar *const feed__feed__1 = (uchar*) (Shared + 103);  // OB_2_init_feed_feed > OB_2_0_feed size:= 1*uchar
uchar *const feed__feed__2 = (uchar*) (Shared + 105);  // OB_3_init_feed_feed > OB_3_0_feed size:= 1*uchar
uchar *const feed__feed__3 = (uchar*) (Shared + 107);  // OB_4_init_feed_feed > OB_4_0_feed size:= 1*uchar
uchar *const feed__feed__4 = (uchar*) (Shared + 113);  // OB_5_init_feed_feed > OB_5_0_feed size:= 1*uchar
uchar *const feed__feed__5 = (uchar*) (Shared + 108);  // OB_6_init_feed_feed > OB_6_0_feed size:= 1*uchar
uchar *const feed__feed__6 = (uchar*) (Shared + 114);  // OB_7_init_feed_feed > OB_7_0_feed size:= 1*uchar
uchar *const feed__feed__7 = (uchar*) (Shared + 115);  // OB_8_init_feed_feed > OB_8_0_feed size:= 1*uchar
uchar *const feed__feed__8 = (uchar*) (Shared + 109);  // OB_9_init_feed_feed > OB_9_0_feed size:= 1*uchar
uchar *const out__feed__0 = (uchar*) (Shared + 116);  // srcD_0_out > OB_0_0_feed size:= 1*uchar
uchar *const back__back__0 = (uchar*) (Shared + 38);  // OB_0_0_back > OB_0_end_back_back size:= 1*uchar
uchar *const back__back__1 = (uchar*) (Shared + 39);  // OB_1_0_back > OB_1_end_back_back size:= 1*uchar
uchar *const back__back__2 = (uchar*) (Shared + 40);  // OB_2_0_back > OB_2_end_back_back size:= 1*uchar
uchar *const back__back__3 = (uchar*) (Shared + 41);  // OB_3_0_back > OB_3_end_back_back size:= 1*uchar
uchar *const back__back__4 = (uchar*) (Shared + 42);  // OB_4_0_back > OB_4_end_back_back size:= 1*uchar
uchar *const back__back__5 = (uchar*) (Shared + 43);  // OB_5_0_back > OB_5_end_back_back size:= 1*uchar
uchar *const back__back__6 = (uchar*) (Shared + 2);  // OB_6_0_back > OB_6_end_back_back size:= 1*uchar
uchar *const back__back__7 = (uchar*) (Shared + 4);  // OB_7_0_back > OB_7_end_back_back size:= 1*uchar
uchar *const back__back__8 = (uchar*) (Shared + 6);  // OB_8_0_back > OB_8_end_back_back size:= 1*uchar
uchar *const back__in__0 = (uchar*) (Shared + 117);  // OB_9_0_back > get_0_in size:= 1*uchar
char *const out_0__inC_1__0 = (char*) (Shared + 0); // explode_src_B0_0_out_out_0 > implode_OC_3_inC_inC_1 size:= 4*char
char *const out_3__inC_0__0 = (char*) (Shared + 0); // explode_src_B0_0_out_out_3 > implode_OC_6_inC_inC_0 size:= 1*char
char *const out_0__inC_1__1 = (char*) (Shared + 0); // explode_src_B1_0_out_out_0 > implode_OC_6_inC_inC_1 size:= 5*char

void* computationThread_Core0(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

#ifdef PREESM_MD5_UPDATE
	PREESM_MD5_CTX preesm_md5_ctx_out_1__inC__1;
	PREESM_MD5_Init(&preesm_md5_ctx_out_1__inC__1);
	PREESM_MD5_CTX preesm_md5_ctx_outB__inC__2;
	PREESM_MD5_Init(&preesm_md5_ctx_outB__inC__2);
#endif
  // Initialisation(s)

  fifoInit(FIFO_Head_OB_0_end_back__OB_1_init_feed__0, 1, NULL, 0); // 1 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    fifoPop(feed__feed__0, FIFO_Head_OB_0_end_back__OB_1_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(0, 1); // Core0 > Core1
    sendEnd(); // Core0 > Core1
    src(out__in__0); // srcA_0

    // Fork frk_0

    {
    }
    sendStart(0, 1); // Core0 > Core1
    sendEnd(); // Core0 > Core1
    sendStart(0, 2); // Core0 > Core2
    sendEnd(); // Core0 > Core2
    sendStart(0, 3); // Core0 > Core3
    sendEnd(); // Core0 > Core3
    sendStart(0, 4); // Core0 > Core4
    sendEnd(); // Core0 > Core4
    sendStart(0, 5); // Core0 > Core5
    sendEnd(); // Core0 > Core5
    sendStart(0, 1); // Core0 > Core1
    sendEnd(); // Core0 > Core1
    sendStart(0, 2); // Core0 > Core2
    sendEnd(); // Core0 > Core2
    sendStart(0, 3); // Core0 > Core3
    sendEnd(); // Core0 > Core3
    sendStart(0, 4); // Core0 > Core4
    sendEnd(); // Core0 > Core4
    receiveStart(); // Core1 > Core0
    receiveEnd(1, 0); // Core1 > Core0
    B(newPort_0__inB__0, out__feed__0, outB__inC_0__0, back__back__0); // OB_0_0

    receiveStart(); // Core5 > Core0
    receiveEnd(5, 0); // Core5 > Core0
    OC(out_1__inC__1); // OC_7
#ifdef PREESM_MD5_UPDATE
		PREESM_MD5_Update(&preesm_md5_ctx_out_1__inC__1,(char *)out_1__inC__1, 6);
		#endif

    fifoPush(back__back__0, FIFO_Head_OB_0_end_back__OB_1_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core1 > Core0
    receiveEnd(1, 0); // Core1 > Core0
    receiveStart(); // Core2 > Core0
    receiveEnd(2, 0); // Core2 > Core0
    // Join implode_OC_0_inC

    {
    }
    sendStart(0, 5); // Core0 > Core5
    sendEnd(); // Core0 > Core5
    receiveStart(); // Core3 > Core0
    receiveEnd(3, 0); // Core3 > Core0
    receiveStart(); // Core4 > Core0
    receiveEnd(4, 0); // Core4 > Core0
    receiveStart(); // Core5 > Core0
    receiveEnd(5, 0); // Core5 > Core0
    // Join implode_OC_1_inC

    {
    }
    sendStart(0, 2); // Core0 > Core2
    sendEnd(); // Core0 > Core2
    receiveStart(); // Core1 > Core0
    receiveEnd(1, 0); // Core1 > Core0
    receiveStart(); // Core2 > Core0
    receiveEnd(2, 0); // Core2 > Core0
    receiveStart(); // Core3 > Core0
    receiveEnd(3, 0); // Core3 > Core0
    // Join implode_OC_2_inC

    {
    }
    OC(outB__inC__2); // OC_2
#ifdef PREESM_MD5_UPDATE
		PREESM_MD5_Update(&preesm_md5_ctx_outB__inC__2,(char *)outB__inC__2, 6);
		#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

#ifdef PREESM_MD5_UPDATE
	// Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out_1__inC__1);
	printf("preesm_md5_out_1__inC__1 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_outB__inC__2);
	printf("preesm_md5_outB__inC__2 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

  return NULL;
}


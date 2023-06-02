//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_0;
extern int initNode0;

extern uchar *const outA__outA_1__0;  // A_1_outA > implode_A_end_outA_outA_outA_1 size:= 20*uchar defined in Core0
extern char Shared_0[553]; //  size:= 553*char
extern char *const FIFO_Head_B_9_end_back__B_10_init_feed__0; // FIFO_Head_B_9_end_back > B_10_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__9;  // B_10_init_feed_feed > B_10_0_feed size:= 1*uchar defined in Core0
extern char *const B_10_init_feed__B_10_0__0;  // B_10_init_feed > B_10_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_11_end_back__B_12_init_feed__0; // FIFO_Head_B_11_end_back > B_12_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__11;  // B_12_init_feed_feed > B_12_0_feed size:= 1*uchar defined in Core0
extern char *const B_12_init_feed__B_12_0__0;  // B_12_init_feed > B_12_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_14_end_back__B_15_init_feed__0; // FIFO_Head_B_14_end_back > B_15_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__14;  // B_15_init_feed_feed > B_15_0_feed size:= 1*uchar defined in Core0
extern char *const B_15_init_feed__B_15_0__0;  // B_15_init_feed > B_15_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_2_end_back__B_3_init_feed__0; // FIFO_Head_B_2_end_back > B_3_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__2;  // B_3_init_feed_feed > B_3_0_feed size:= 1*uchar defined in Core0
extern char *const B_3_init_feed__B_3_0__0;  // B_3_init_feed > B_3_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_5_end_back__B_6_init_feed__0; // FIFO_Head_B_5_end_back > B_6_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__5;  // B_6_init_feed_feed > B_6_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_B_8_end_back__B_9_init_feed__0; // FIFO_Head_B_8_end_back > B_9_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__8;  // B_9_init_feed_feed > B_9_0_feed size:= 1*uchar defined in Core0
extern char *const B_9_init_feed__B_9_0__0;  // B_9_init_feed > B_9_0 size:= 1*char defined in Core0
extern char *const A_0__implode_A_end_outA_outA__0;  // A_0 > implode_A_end_outA_outA size:= 20*char defined in Core0
extern char *const B_11_init_feed__B_11_0__0;  // B_11_init_feed > B_11_0 size:= 1*char defined in Core0
extern char *const B_14_init_feed__B_14_0__0;  // B_14_init_feed > B_14_0 size:= 1*char defined in Core0
extern char *const B_2_init_feed__B_2_0__0;  // B_2_init_feed > B_2_0 size:= 1*char defined in Core0
extern char *const frk_0__B_2_0__0;  // frk_0 > B_2_0 size:= 1*char defined in Core0
extern char *const frk_0__B_6_0__0;  // frk_0 > B_6_0 size:= 1*char defined in Core0
extern char *const frk_0__B_11_0__0;  // frk_0 > B_11_0 size:= 1*char defined in Core0
extern uchar *const newPort11_11__inB__0;  // frk_0_newPort11_11 > B_11_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__10;  // B_11_init_feed_feed > B_11_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort11_11__0;  // B_11_0_outB > jn_0_newPort11_11 size:= 1*uchar defined in Core0
extern uchar *const back__back__12;  // B_11_0_back > B_11_end_back_back size:= 1*uchar defined in Core0
extern char *const B_11_0__jn_0__0;  // B_11_0 > jn_0 size:= 1*char defined in Core0
extern char *const frk_0__B_14_0__0;  // frk_0 > B_14_0 size:= 1*char defined in Core0
extern uchar *const newPort14_14__inB__0;  // frk_0_newPort14_14 > B_14_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__13;  // B_14_init_feed_feed > B_14_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort14_14__0;  // B_14_0_outB > jn_0_newPort14_14 size:= 1*uchar defined in Core0
extern uchar *const back__back__14;  // B_14_0_back > B_14_end_back_back size:= 1*uchar defined in Core0
extern char *const B_14_0__jn_0__0;  // B_14_0 > jn_0 size:= 1*char defined in Core0
extern uchar *const newPort2_02__inB__0;  // frk_0_newPort2_02 > B_2_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__1;  // B_2_init_feed_feed > B_2_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort2_02__0;  // B_2_0_outB > jn_0_newPort2_02 size:= 1*uchar defined in Core0
extern uchar *const back__back__6;  // B_2_0_back > B_2_end_back_back size:= 1*uchar defined in Core0
extern char *const B_2_0__jn_0__0;  // B_2_0 > jn_0 size:= 1*char defined in Core0
extern uchar *const newPort6_06__inB__0;  // frk_0_newPort6_06 > B_6_0_inB size:= 1*uchar defined in Core0
extern uchar *const outB__newPort6_06__0;  // B_6_0_outB > jn_0_newPort6_06 size:= 1*uchar defined in Core0
extern uchar *const back__back__9;  // B_6_0_back > B_6_end_back_back size:= 1*uchar defined in Core0
extern char *const B_6_0__B_6_end_back__0;  // B_6_0 > B_6_end_back size:= 1*char defined in Core0
extern char *const B_6_0__jn_0__0;  // B_6_0 > jn_0 size:= 1*char defined in Core0
extern char *const A_2__implode_A_end_outA_outA__0;  // A_2 > implode_A_end_outA_outA size:= 20*char defined in Core0
extern uchar *const outA__outA_0__0;  // A_0_outA > implode_A_end_outA_outA_outA_0 size:= 20*uchar defined in Core0
extern uchar *const outA__outA_2__0;  // A_2_outA > implode_A_end_outA_outA_outA_2 size:= 20*uchar defined in Core0
extern uchar *const outA__outA__0;  // implode_A_end_outA_outA_outA > A_end_outA_outA size:= 60*uchar defined in Core0
extern char *const implode_A_end_outA_outA__A_end_outA__0; // implode_A_end_outA_outA > A_end_outA size:= 60*char defined in Core0
extern char *const B_5_0__B_5_end_back__0;  // B_5_0 > B_5_end_back size:= 1*char defined in Core0
extern uchar *const back__back__0;  // B_5_0_back > B_5_end_back_back size:= 1*uchar defined in Core0
extern char *const B_8_0__B_8_end_back__0;  // B_8_0 > B_8_end_back size:= 1*char defined in Core0
extern uchar *const back__back__11;  // B_8_0_back > B_8_end_back_back size:= 1*uchar defined in Core0
extern char *const B_9_0__B_9_end_back__0;  // B_9_0 > B_9_end_back size:= 1*char defined in Core0
extern uchar *const back__back__2;  // B_9_0_back > B_9_end_back_back size:= 1*uchar defined in Core0

void* computationThread_Core2(uchar *outA0, uchar *outB0, uchar *outD0) {

if(initNode0){
    // Initialisation(s)
    fifoInit(FIFO_Head_B_9_end_back__B_10_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_11_end_back__B_12_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_14_end_back__B_15_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_2_end_back__B_3_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_5_end_back__B_6_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_8_end_back__B_9_init_feed__0, 1 * sizeof(char), NULL, 0);
}
    // loop body
    A(outA__outA_1__0); // A_1

    fifoPop(feed__feed__9, FIFO_Head_B_9_end_back__B_10_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    fifoPop(feed__feed__11, FIFO_Head_B_11_end_back__B_12_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(2, 3); // Core2 > Core3
    sendEnd(); // Core2 > Core3
    fifoPop(feed__feed__14, FIFO_Head_B_14_end_back__B_15_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(2, 3); // Core2 > Core3
    sendEnd(); // Core2 > Core3
    fifoPop(feed__feed__2, FIFO_Head_B_2_end_back__B_3_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(2, 3); // Core2 > Core3
    sendEnd(); // Core2 > Core3
    fifoPop(feed__feed__5, FIFO_Head_B_5_end_back__B_6_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPop(feed__feed__8, FIFO_Head_B_8_end_back__B_9_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    B(newPort11_11__inB__0, feed__feed__10, outB__newPort11_11__0, back__back__12); // B_11_0

    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    B(newPort14_14__inB__0, feed__feed__13, outB__newPort14_14__0, back__back__14); // B_14_0

    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    B(newPort2_02__inB__0, feed__feed__1, outB__newPort2_02__0, back__back__6); // B_2_0

    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    B(newPort6_06__inB__0, feed__feed__5, outB__newPort6_06__0, back__back__9); // B_6_0

    sendStart(2, 3); // Core2 > Core3
    sendEnd(); // Core2 > Core3
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    // Join implode_A_end_outA_outA

    {
        memcpy(outA__outA__0 + 0, outA__outA_0__0 + 0, 20 * sizeof(uchar));
        memcpy(outA__outA__0 + 20, outA__outA_1__0 + 0, 20 * sizeof(uchar));
        memcpy(outA__outA__0 + 40, outA__outA_2__0 + 0, 20 * sizeof(uchar));
    }
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    fifoPush(back__back__12, FIFO_Head_B_11_end_back__B_12_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPush(back__back__14, FIFO_Head_B_14_end_back__B_15_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPush(back__back__6, FIFO_Head_B_2_end_back__B_3_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    fifoPush(back__back__0, FIFO_Head_B_5_end_back__B_6_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    fifoPush(back__back__11, FIFO_Head_B_8_end_back__B_9_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    fifoPush(back__back__2, FIFO_Head_B_9_end_back__B_10_init_feed__0, 1 * sizeof(char), NULL, 0);
    // loop footer
    pthread_barrier_wait(&iter_barrier_0);
    return NULL;
}
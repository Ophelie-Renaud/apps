//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier_0;
extern int initNode0;

extern char Shared_0[553]; //  size:= 553*char
extern char *const FIFO_Head_B_13_end_back__B_14_init_feed__0; // FIFO_Head_B_13_end_back > B_14_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__13;  // B_14_init_feed_feed > B_14_0_feed size:= 1*uchar defined in Core0
extern char *const B_14_init_feed__B_14_0__0;  // B_14_init_feed > B_14_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_1_end_back__B_2_init_feed__0; // FIFO_Head_B_1_end_back > B_2_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__1;  // B_2_init_feed_feed > B_2_0_feed size:= 1*uchar defined in Core0
extern char *const B_2_init_feed__B_2_0__0;  // B_2_init_feed > B_2_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_4_end_back__B_5_init_feed__0; // FIFO_Head_B_4_end_back > B_5_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__4;  // B_5_init_feed_feed > B_5_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_B_7_end_back__B_8_init_feed__0; // FIFO_Head_B_7_end_back > B_8_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__7;  // B_8_init_feed_feed > B_8_0_feed size:= 1*uchar defined in Core0
extern char *const B_8_init_feed__B_8_0__0;  // B_8_init_feed > B_8_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_A_end_outA__frk_init_in__0; // FIFO_Head_A_end_outA > frk_init_in size:= 60*char defined in Core0
extern uchar *const in__in__0;  // frk_init_in_in > frk_0_in size:= 60*uchar defined in Core0
extern uchar *const newPort_00__inB__0;  // frk_0_newPort_00 > B_0_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort1_01__inB__0;  // frk_0_newPort1_01 > B_1_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort2_02__inB__0;  // frk_0_newPort2_02 > B_2_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort3_03__inB__0;  // frk_0_newPort3_03 > B_3_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort4_04__inB__0;  // frk_0_newPort4_04 > B_4_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort5_05__inB__0;  // frk_0_newPort5_05 > B_5_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort6_06__inB__0;  // frk_0_newPort6_06 > B_6_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort7_07__inB__0;  // frk_0_newPort7_07 > B_7_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort8_08__inB__0;  // frk_0_newPort8_08 > B_8_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort9_09__inB__0;  // frk_0_newPort9_09 > B_9_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort10_10__inB__0;  // frk_0_newPort10_10 > B_10_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort11_11__inB__0;  // frk_0_newPort11_11 > B_11_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort12_12__inB__0;  // frk_0_newPort12_12 > B_12_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort13_13__inB__0;  // frk_0_newPort13_13 > B_13_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort14_14__inB__0;  // frk_0_newPort14_14 > B_14_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort15_15__inB__0;  // frk_0_newPort15_15 > B_15_0_inB size:= 1*uchar defined in Core0
extern uchar *const newPort16_16__inB__0;  // frk_0_newPort16_16 > B_16_0_inB size:= 1*uchar defined in Core0
extern char *const frk_0__B_0_0__0;  // frk_0 > B_0_0 size:= 1*char defined in Core0
extern char *const frk_0__B_2_0__0;  // frk_0 > B_2_0 size:= 1*char defined in Core0
extern char *const frk_0__B_3_0__0;  // frk_0 > B_3_0 size:= 1*char defined in Core0
extern char *const frk_0__B_4_0__0;  // frk_0 > B_4_0 size:= 1*char defined in Core0
extern char *const frk_0__B_6_0__0;  // frk_0 > B_6_0 size:= 1*char defined in Core0
extern char *const frk_0__B_7_0__0;  // frk_0 > B_7_0 size:= 1*char defined in Core0
extern char *const frk_0__B_8_0__0;  // frk_0 > B_8_0 size:= 1*char defined in Core0
extern char *const frk_0__B_11_0__0;  // frk_0 > B_11_0 size:= 1*char defined in Core0
extern char *const frk_0__B_12_0__0;  // frk_0 > B_12_0 size:= 1*char defined in Core0
extern char *const frk_0__B_14_0__0;  // frk_0 > B_14_0 size:= 1*char defined in Core0
extern char *const frk_0__B_15_0__0;  // frk_0 > B_15_0 size:= 1*char defined in Core0
extern char *const frk_0__B_16_0__0;  // frk_0 > B_16_0 size:= 1*char defined in Core0
extern char *const B_10_init_feed__B_10_0__0;  // B_10_init_feed > B_10_0 size:= 1*char defined in Core0
extern uchar *const feed__feed__9;  // B_10_init_feed_feed > B_10_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort10_10__0;  // B_10_0_outB > jn_0_newPort10_10 size:= 1*uchar defined in Core0
extern uchar *const back__back__3;  // B_10_0_back > B_10_end_back_back size:= 1*uchar defined in Core0
extern char *const B_10_0__B_10_end_back__0;  // B_10_0 > B_10_end_back size:= 1*char defined in Core0
extern char *const B_13_init_feed__B_13_0__0;  // B_13_init_feed > B_13_0 size:= 1*char defined in Core0
extern uchar *const feed__feed__12;  // B_13_init_feed_feed > B_13_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort13_13__0;  // B_13_0_outB > jn_0_newPort13_13 size:= 1*uchar defined in Core0
extern uchar *const back__back__4;  // B_13_0_back > B_13_end_back_back size:= 1*uchar defined in Core0
extern char *const B_1_init_feed__B_1_0__0;  // B_1_init_feed > B_1_0 size:= 1*char defined in Core0
extern uchar *const feed__feed__0;  // B_1_init_feed_feed > B_1_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort1_01__0;  // B_1_0_outB > jn_0_newPort1_01 size:= 1*uchar defined in Core0
extern uchar *const back__back__1;  // B_1_0_back > B_1_end_back_back size:= 1*uchar defined in Core0
extern uchar *const outB__newPort5_05__0;  // B_5_0_outB > jn_0_newPort5_05 size:= 1*uchar defined in Core0
extern uchar *const back__back__0;  // B_5_0_back > B_5_end_back_back size:= 1*uchar defined in Core0
extern char *const B_5_0__B_5_end_back__0;  // B_5_0 > B_5_end_back size:= 1*char defined in Core0
extern char *const B_9_init_feed__B_9_0__0;  // B_9_init_feed > B_9_0 size:= 1*char defined in Core0
extern uchar *const feed__feed__8;  // B_9_init_feed_feed > B_9_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort9_09__0;  // B_9_0_outB > jn_0_newPort9_09 size:= 1*uchar defined in Core0
extern uchar *const back__back__2;  // B_9_0_back > B_9_end_back_back size:= 1*uchar defined in Core0
extern char *const B_9_0__B_9_end_back__0;  // B_9_0 > B_9_end_back size:= 1*char defined in Core0
extern char *const B_11_0__jn_0__0;  // B_11_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_14_0__jn_0__0;  // B_14_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_2_0__jn_0__0;  // B_2_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_6_0__jn_0__0;  // B_6_0 > jn_0 size:= 1*char defined in Core0
extern char *const implode_A_end_outA_outA__A_end_outA__0; // implode_A_end_outA_outA > A_end_outA size:= 60*char defined in Core0
extern uchar *const outA__outA__0;  // implode_A_end_outA_outA_outA > A_end_outA_outA size:= 60*uchar defined in Core0
extern char *const B_16_0__jn_0__0;  // B_16_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_4_0__B_4_end_back__0;  // B_4_0 > B_4_end_back size:= 1*char defined in Core0
extern uchar *const back__back__8;  // B_4_0_back > B_4_end_back_back size:= 1*uchar defined in Core0
extern char *const B_12_0__jn_0__0;  // B_12_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_15_0__jn_0__0;  // B_15_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_3_0__jn_0__0;  // B_3_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_7_0__B_7_end_back__0;  // B_7_0 > B_7_end_back size:= 1*char defined in Core0
extern uchar *const back__back__10;  // B_7_0_back > B_7_end_back_back size:= 1*uchar defined in Core0
extern char *const B_4_0__jn_0__0;  // B_4_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_7_0__jn_0__0;  // B_7_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_8_0__jn_0__0;  // B_8_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_0_0__jn_0__0;  // B_0_0 > jn_0 size:= 1*char defined in Core0
extern uchar *const outB__newPort0_00__0;  // B_0_0_outB > jn_0_newPort0_00 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort2_02__0;  // B_2_0_outB > jn_0_newPort2_02 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort3_03__0;  // B_3_0_outB > jn_0_newPort3_03 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort4_04__0;  // B_4_0_outB > jn_0_newPort4_04 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort6_06__0;  // B_6_0_outB > jn_0_newPort6_06 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort7_07__0;  // B_7_0_outB > jn_0_newPort7_07 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort8_08__0;  // B_8_0_outB > jn_0_newPort8_08 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort11_11__0;  // B_11_0_outB > jn_0_newPort11_11 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort12_12__0;  // B_12_0_outB > jn_0_newPort12_12 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort14_14__0;  // B_14_0_outB > jn_0_newPort14_14 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort15_15__0;  // B_15_0_outB > jn_0_newPort15_15 size:= 1*uchar defined in Core0
extern uchar *const outB__newPort16_16__0;  // B_16_0_outB > jn_0_newPort16_16 size:= 1*uchar defined in Core0
extern uchar *const out__in__0;  // jn_0_out > snk_0_in size:= 17*uchar defined in Core0
extern char *const jn_0__snk_0__0;  // jn_0 > snk_0 size:= 17*char defined in Core0
void* computationThread_Core1(uchar *outA0, uchar *outB0, uchar *outD0) {

    if(initNode0){  // Initialisation(s)
    fifoInit(FIFO_Head_B_13_end_back__B_14_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_1_end_back__B_2_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_4_end_back__B_5_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_B_7_end_back__B_8_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoInit(FIFO_Head_A_end_outA__frk_init_in__0, 60 * sizeof(char), NULL, 0);
}
    // loop body
    fifoPop(feed__feed__13, FIFO_Head_B_13_end_back__B_14_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    fifoPop(feed__feed__1, FIFO_Head_B_1_end_back__B_2_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    fifoPop(feed__feed__4, FIFO_Head_B_4_end_back__B_5_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPop(feed__feed__7, FIFO_Head_B_7_end_back__B_8_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    fifoPop(in__in__0, FIFO_Head_A_end_outA__frk_init_in__0, 60 * sizeof(char), NULL, 0);
    // Fork frk_0

    {
        memcpy(newPort_00__inB__0 + 0, in__in__0 + 0, 1 * sizeof(uchar));
        memcpy(newPort1_01__inB__0 + 0, in__in__0 + 1, 1 * sizeof(uchar));
        memcpy(newPort2_02__inB__0 + 0, in__in__0 + 2, 1 * sizeof(uchar));
        memcpy(newPort3_03__inB__0 + 0, in__in__0 + 3, 1 * sizeof(uchar));
        memcpy(newPort4_04__inB__0 + 0, in__in__0 + 4, 1 * sizeof(uchar));
        memcpy(newPort5_05__inB__0 + 0, in__in__0 + 5, 1 * sizeof(uchar));
        memcpy(newPort6_06__inB__0 + 0, in__in__0 + 6, 1 * sizeof(uchar));
        memcpy(newPort7_07__inB__0 + 0, in__in__0 + 7, 1 * sizeof(uchar));
        memcpy(newPort8_08__inB__0 + 0, in__in__0 + 8, 1 * sizeof(uchar));
        memcpy(newPort9_09__inB__0 + 0, in__in__0 + 9, 1 * sizeof(uchar));
        memcpy(newPort10_10__inB__0 + 0, in__in__0 + 10, 1 * sizeof(uchar));
        memcpy(newPort11_11__inB__0 + 0, in__in__0 + 11, 1 * sizeof(uchar));
        memcpy(newPort12_12__inB__0 + 0, in__in__0 + 12, 1 * sizeof(uchar));
        memcpy(newPort13_13__inB__0 + 0, in__in__0 + 13, 1 * sizeof(uchar));
        memcpy(newPort14_14__inB__0 + 0, in__in__0 + 14, 1 * sizeof(uchar));
        memcpy(newPort15_15__inB__0 + 0, in__in__0 + 15, 1 * sizeof(uchar));
        memcpy(newPort16_16__inB__0 + 0, in__in__0 + 16, 1 * sizeof(uchar));
        memcpy(outA0 + 0, in__in__0 + 17, 43 * sizeof(uchar));
    }
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    B(newPort10_10__inB__0, feed__feed__9, outB__newPort10_10__0, back__back__3); // B_10_0

    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    B(newPort13_13__inB__0, feed__feed__12, outB__newPort13_13__0, back__back__4); // B_13_0

    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort1_01__inB__0, feed__feed__0, outB__newPort1_01__0, back__back__1); // B_1_0

    B(newPort5_05__inB__0, feed__feed__4, outB__newPort5_05__0, back__back__0); // B_5_0

    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    B(newPort9_09__inB__0, feed__feed__8, outB__newPort9_09__0, back__back__2); // B_9_0

    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    fifoPush(outA__outA__0, FIFO_Head_A_end_outA__frk_init_in__0, 60 * sizeof(char), NULL, 0);
    fifoPush(back__back__4, FIFO_Head_B_13_end_back__B_14_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPush(back__back__1, FIFO_Head_B_1_end_back__B_2_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    fifoPush(back__back__8, FIFO_Head_B_4_end_back__B_5_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    fifoPush(back__back__10, FIFO_Head_B_7_end_back__B_8_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    // Join jn_0

    {
        memcpy(outB0 + 0, outB__newPort0_00__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 1, outB__newPort1_01__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 2, outB__newPort2_02__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 3, outB__newPort3_03__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 4, outB__newPort4_04__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 5, outB__newPort5_05__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 6, outB__newPort6_06__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 7, outB__newPort7_07__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 8, outB__newPort8_08__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 9, outB__newPort9_09__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 10, outB__newPort10_10__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 11, outB__newPort11_11__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 12, outB__newPort12_12__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 13, outB__newPort13_13__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 14, outB__newPort14_14__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 15, outB__newPort15_15__0 + 0, 1 * sizeof(uchar));
        memcpy(outB0 + 16, outB__newPort16_16__0 + 0, 1 * sizeof(uchar));
    }
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    // loop footer
    pthread_barrier_wait(&iter_barrier_0);
    return NULL;
}
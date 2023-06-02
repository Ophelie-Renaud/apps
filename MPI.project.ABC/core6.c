//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_1;
extern int initNode1;

extern char Shared_1[95]; //  size:= 95*char
extern char *const FIFO_Head_B_31_end_back__B_32_init_feed__0; // FIFO_Head_B_31_end_back > B_32_init_feed size:= 1*char defined in Core0
extern uchar *const out__in__01 ;
extern uchar *const newPort_00__inB__01 ;
extern uchar *const newPort1_01__inB__01 ;
extern uchar *const newPort2_02__inB__01 ;
extern uchar *const newPort3_03__inB__01 ;
extern uchar *const newPort4_04__inB__01 ;
extern uchar *const newPort5_05__inB__01 ;
extern uchar *const newPort6_06__inB__01 ;
extern uchar *const newPort7_07__inB__01 ;
extern uchar *const newPort8_08__inB__01 ;
extern uchar *const newPort9_09__inB__01 ;
extern uchar *const newPort10_10__inB__01 ;
extern uchar *const newPort11_11__inB__01 ;
extern uchar *const newPort12_12__inB__01 ;
extern uchar *const newPort13_13__inB__01 ;
extern uchar *const newPort14_14__inB__01 ;
extern uchar *const newPort15_15__inB__01 ;
extern uchar *const newPort16_16__inB__01 ;
extern uchar *const newPort17_17__inB__01 ;
extern uchar *const newPort18_18__inB__01 ;
extern uchar *const newPort19_19__inB__01 ;
extern uchar *const newPort20_20__inB__01 ;
extern uchar *const newPort21_21__inB__01 ;
extern uchar *const newPort22_22__inB__01 ;
extern uchar *const newPort35_23__in__01 ;
extern uchar *const out__in__1 ;
extern uchar *const outB__newPort0_00__01 ;
extern uchar *const outB__newPort1_01__01 ;
extern uchar *const outB__newPort2_02__01 ;
extern uchar *const outB__newPort3_03__01 ;
extern uchar *const outB__newPort4_04__01 ;
extern uchar *const outB__newPort5_05__01 ;
extern uchar *const outB__newPort6_06__01 ;
extern uchar *const outB__newPort7_07__01 ;
extern uchar *const outB__newPort8_08__01 ;
extern uchar *const outB__newPort9_09__01 ;
extern uchar *const outB__newPort10_10__01 ;
extern uchar *const outB__newPort11_11__01 ;
extern uchar *const outB__newPort12_12__01 ;
extern uchar *const outB__newPort13_13__01 ;
extern uchar *const outB__newPort14_14__01 ;
extern uchar *const outB__newPort15_15__01 ;
extern uchar *const outB__newPort16_16__01 ;
extern uchar *const outB__newPort17_17__01 ;
extern uchar *const outB__newPort18_18__01 ;
extern uchar *const outB__newPort19_19__01 ;
extern uchar *const outB__newPort20_20__01 ;
extern uchar *const outB__newPort21_21__01 ;
extern uchar *const outB__newPort22_22__01 ;
extern uchar *const feed__feed1__01 ;
extern uchar *const feed__feed1__1 ;
extern uchar *const feed__feed1__2 ;
extern uchar *const feed__feed1__3 ;
extern uchar *const feed__feed1__4 ;
extern uchar *const feed__feed1__5;
extern uchar *const feed__feed1__6;
extern uchar *const feed__feed1__7 ;
extern uchar *const feed__feed1__8;
extern uchar *const feed__feed1__9 ;
extern uchar *const feed__feed1__10 ;
extern uchar *const feed__feed1__11 ;
extern uchar *const feed__feed1__12 ;
extern uchar *const feed__feed1__13;
extern uchar *const feed__feed1__14;
extern uchar *const feed__feed1__15;
extern uchar *const feed__feed1__16 ;
extern uchar *const feed__feed1__17 ;
extern uchar *const feed__feed1__18;
extern uchar *const feed__feed1__19;
extern uchar *const out__feed__01;
extern uchar *const back__back1__01;
extern uchar *const back__back1__1;
extern uchar *const back__back1__2 ;
extern uchar *const back__back1__3;
extern uchar *const back__back1__4;
extern uchar *const back__back1__5;
extern uchar *const back__back1__6;
extern uchar *const back__back1__7;
extern uchar *const back__back1__8;
extern uchar *const back__back1__9;
extern uchar *const back__back1__10;
extern uchar *const back__back1__11;
extern uchar *const back__back1__12 ;
extern uchar *const back__back1__13;
extern uchar *const back__back1__14;
extern uchar *const back__feed__01;
extern uchar *const back__back1__15 ;
extern uchar *const back__back1__16;
extern uchar *const back__back1__17;
extern uchar *const back__back1__18;
extern uchar *const back__feed__1 ;
extern uchar *const back__back1__19;
extern uchar *const back__in__01 ;
void* computationThread_Core6(uchar *outA0, uchar *outD0, uchar *outA1, uchar *outB1, uchar *outD1) {

    if(initNode1){
    // Initialisation(s)

    fifoInit(FIFO_Head_B_31_end_back__B_32_init_feed__0, 1, NULL, 0); // 1 * char
}
// loop body
    fifoPop(feed__feed1__14, FIFO_Head_B_31_end_back__B_32_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    receiveStart(); // Core4 > Core2
    receiveEnd(4, 2); // Core4 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort5_05__inB__01, feed__feed1__4, outB__newPort5_05__01, back__back1__6); // B_22_0

    sendStart(2, 5); // Core2 > Core5
    sendEnd(); // Core2 > Core5
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core4 > Core2
    receiveEnd(4, 2); // Core4 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort11_11__inB__01, feed__feed1__10, outB__newPort11_11__01, back__back1__11); // B_28_0

    sendStart(2, 5); // Core2 > Core5
    sendEnd(); // Core2 > Core5
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort18_18__inB__01, feed__feed1__16, outB__newPort18_18__01, back__back1__16); // B_35_0

    sendStart(2, 4); // Core2 > Core4
    sendEnd(); // Core2 > Core4
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort21_21__inB__01, feed__feed1__19, outB__newPort21_21__01, back__feed__1); // B_38_0

    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core5 > Core2
    receiveEnd(5, 2); // Core5 > Core2
    fifoPush(back__back1__14, FIFO_Head_B_31_end_back__B_32_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier_1);

    return NULL;
}
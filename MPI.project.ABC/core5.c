//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_1;
extern int initNode1;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
//char *const srcA_0__frk_0__01 = (char*) (Shared_1 + 0);  // srcA_0 > frk_0 size:= 43*char
//char *const frk_0__B_17_0__01 = (char*) (Shared_1 + 0);  // frk_0 > B_17_0 size:= 1*char
//char *const frk_0__B_18_0__01 = (char*) (Shared_1 + 1);  // frk_0 > B_18_0 size:= 1*char
//char *const frk_0__B_19_0__01 = (char*) (Shared_1 + 2);  // frk_0 > B_19_0 size:= 1*char
//char *const frk_0__B_20_0__01 = (char*) (Shared_1 + 3);  // frk_0 > B_20_0 size:= 1*char
//char *const frk_0__B_21_0__01 = (char*) (Shared_1 + 4);  // frk_0 > B_21_0 size:= 1*char
//char *const frk_0__B_22_0__01 = (char*) (Shared_1 + 5);  // frk_0 > B_22_0 size:= 1*char
//char *const frk_0__B_23_0__01 = (char*) (Shared_1 + 6);  // frk_0 > B_23_0 size:= 1*char
//char *const frk_0__B_24_0__01 = (char*) (Shared_1 + 7);  // frk_0 > B_24_0 size:= 1*char
//char *const frk_0__B_25_0__01 = (char*) (Shared_1 + 8);  // frk_0 > B_25_0 size:= 1*char
//char *const frk_0__B_26_0__01 = (char*) (Shared_1 + 9);  // frk_0 > B_26_0 size:= 1*char
//char *const frk_0__B_27_0__01 = (char*) (Shared_1 + 10);  // frk_0 > B_27_0 size:= 1*char
//char *const frk_0__B_28_0__01 = (char*) (Shared_1 + 11);  // frk_0 > B_28_0 size:= 1*char
//char *const frk_0__B_29_0__01 = (char*) (Shared_1 + 12);  // frk_0 > B_29_0 size:= 1*char
//char *const frk_0__B_30_0__01 = (char*) (Shared_1 + 13);  // frk_0 > B_30_0 size:= 1*char
//char *const frk_0__B_31_0__01 = (char*) (Shared_1 + 14);  // frk_0 > B_31_0 size:= 1*char
//char *const frk_0__B_32_0__01 = (char*) (Shared_1 + 15);  // frk_0 > B_32_0 size:= 1*char
//char *const frk_0__B_33_0__01 = (char*) (Shared_1 + 16);  // frk_0 > B_33_0 size:= 1*char
//char *const frk_0__B_34_0__01 = (char*) (Shared_1 + 17);  // frk_0 > B_34_0 size:= 1*char
//char *const frk_0__B_35_0__01 = (char*) (Shared_1 + 18);  // frk_0 > B_35_0 size:= 1*char
//char *const frk_0__B_36_0__01 = (char*) (Shared_1 + 19);  // frk_0 > B_36_0 size:= 1*char
//char *const frk_0__B_37_0__01 = (char*) (Shared_1 + 20);  // frk_0 > B_37_0 size:= 1*char
//char *const frk_0__B_38_0__01 = (char*) (Shared_1 + 21);  // frk_0 > B_38_0 size:= 1*char
//char *const frk_0__B_39_0__01 = (char*) (Shared_1 + 22);  // frk_0 > B_39_0 size:= 1*char
//char *const frk_0__snkA_0__01 = (char*) (Shared_1 + 23);  // frk_0 > snkA_0 size:= 20*char
//char *const jn_0__snkB_0__01 = (char*) (Shared_1 + 43);  // jn_0 > snkB_0 size:= 23*char
//char *const B_17_0__jn_0__01 = (char*) (Shared_1 + 43);  // B_17_0 > jn_0 size:= 1*char
//char *const B_18_0__jn_0__01 = (char*) (Shared_1 + 44);  // B_18_0 > jn_0 size:= 1*char
//char *const B_19_0__jn_0__01 = (char*) (Shared_1 + 45);  // B_19_0 > jn_0 size:= 1*char
//char *const B_20_0__jn_0__01 = (char*) (Shared_1 + 46);  // B_20_0 > jn_0 size:= 1*char
//char *const B_21_0__jn_0__01 = (char*) (Shared_1 + 47);  // B_21_0 > jn_0 size:= 1*char
//char *const B_22_0__jn_0__01 = (char*) (Shared_1 + 48);  // B_22_0 > jn_0 size:= 1*char
//char *const B_23_0__jn_0__01 = (char*) (Shared_1 + 49);  // B_23_0 > jn_0 size:= 1*char
//char *const B_24_0__jn_0__01 = (char*) (Shared_1 + 50);  // B_24_0 > jn_0 size:= 1*char
//char *const B_25_0__jn_0__01 = (char*) (Shared_1 + 51);  // B_25_0 > jn_0 size:= 1*char
//char *const B_26_0__jn_0__01 = (char*) (Shared_1 + 52);  // B_26_0 > jn_0 size:= 1*char
//char *const B_27_0__jn_0__01 = (char*) (Shared_1 + 53);  // B_27_0 > jn_0 size:= 1*char
//char *const B_28_0__jn_0__01 = (char*) (Shared_1 + 54);  // B_28_0 > jn_0 size:= 1*char
//char *const B_29_0__jn_0__01 = (char*) (Shared_1 + 55);  // B_29_0 > jn_0 size:= 1*char
//char *const B_30_0__jn_0__01 = (char*) (Shared_1 + 56);  // B_30_0 > jn_0 size:= 1*char
//char *const B_31_0__jn_0__01 = (char*) (Shared_1 + 57);  // B_31_0 > jn_0 size:= 1*char
//char *const B_32_0__jn_0__01 = (char*) (Shared_1 + 58);  // B_32_0 > jn_0 size:= 1*char
//char *const B_33_0__jn_0__01 = (char*) (Shared_1 + 59);  // B_33_0 > jn_0 size:= 1*char
//char *const B_34_0__jn_0__01 = (char*) (Shared_1 + 60);  // B_34_0 > jn_0 size:= 1*char
//char *const B_35_0__jn_0__01 = (char*) (Shared_1 + 61);  // B_35_0 > jn_0 size:= 1*char
//char *const B_36_0__jn_0__01 = (char*) (Shared_1 + 62);  // B_36_0 > jn_0 size:= 1*char
//char *const B_37_0__jn_0__01 = (char*) (Shared_1 + 63);  // B_37_0 > jn_0 size:= 1*char
//char *const B_38_0__jn_0__01 = (char*) (Shared_1 + 64);  // B_38_0 > jn_0 size:= 1*char
//char *const B_39_0__jn_0__01 = (char*) (Shared_1 + 65);  // B_39_0 > jn_0 size:= 1*char
//char *const B_18_init_feed__B_18_0__01 = (char*) (Shared_1 + 49);  // B_18_init_feed > B_18_0 size:= 1*char
//char *const B_19_init_feed__B_19_0__01 = (char*) (Shared_1 + 50);  // B_19_init_feed > B_19_0 size:= 1*char
//char *const B_20_init_feed__B_20_0__01 = (char*) (Shared_1 + 51);  // B_20_init_feed > B_20_0 size:= 1*char
//char *const B_21_init_feed__B_21_0__01 = (char*) (Shared_1 + 53);  // B_21_init_feed > B_21_0 size:= 1*char
//char *const B_22_init_feed__B_22_0__01 = (char*) (Shared_1 + 54);  // B_22_init_feed > B_22_0 size:= 1*char
//char *const B_23_init_feed__B_23_0__01 = (char*) (Shared_1 + 55);  // B_23_init_feed > B_23_0 size:= 1*char
//char *const B_24_init_feed__B_24_0__01 = (char*) (Shared_1 + 56);  // B_24_init_feed > B_24_0 size:= 1*char
//char *const B_25_init_feed__B_25_0__01 = (char*) (Shared_1 + 57);  // B_25_init_feed > B_25_0 size:= 1*char
//char *const B_26_init_feed__B_26_0__01 = (char*) (Shared_1 + 59);  // B_26_init_feed > B_26_0 size:= 1*char
//char *const B_27_init_feed__B_27_0__01 = (char*) (Shared_1 + 58);  // B_27_init_feed > B_27_0 size:= 1*char
//char *const B_28_init_feed__B_28_0__01 = (char*) (Shared_1 + 61);  // B_28_init_feed > B_28_0 size:= 1*char
//char *const B_29_init_feed__B_29_0__01 = (char*) (Shared_1 + 62);  // B_29_init_feed > B_29_0 size:= 1*char
//char *const B_30_init_feed__B_30_0__01 = (char*) (Shared_1 + 63);  // B_30_init_feed > B_30_0 size:= 1*char
//char *const B_31_init_feed__B_31_0__01 = (char*) (Shared_1 + 66);  // B_31_init_feed > B_31_0 size:= 1*char
//char *const B_32_init_feed__B_32_0__01 = (char*) (Shared_1 + 60);  // B_32_init_feed > B_32_0 size:= 1*char
//char *const B_34_init_feed__B_34_0__01 = (char*) (Shared_1 + 67);  // B_34_init_feed > B_34_0 size:= 1*char
//char *const B_35_init_feed__B_35_0__01 = (char*) (Shared_1 + 64);  // B_35_init_feed > B_35_0 size:= 1*char
//char *const B_36_init_feed__B_36_0__01 = (char*) (Shared_1 + 68);  // B_36_init_feed > B_36_0 size:= 1*char
//char *const B_37_init_feed__B_37_0__01 = (char*) (Shared_1 + 69);  // B_37_init_feed > B_37_0 size:= 1*char
//char *const B_38_init_feed__B_38_0__01 = (char*) (Shared_1 + 65);  // B_38_init_feed > B_38_0 size:= 1*char
//char *const srcD_0__B_17_0__01 = (char*) (Shared_1 + 52);  // srcD_0 > B_17_0 size:= 1*char
//char *const B_26_0__B_26_end_back__01 = (char*) (Shared_1 + 0);  // B_26_0 > B_26_end_back size:= 1*char
//char *const B_17_0__B_17_end_back__01 = (char*) (Shared_1 + 70);  // B_17_0 > B_17_end_back size:= 1*char
//char *const B_18_0__B_18_end_back__01 = (char*) (Shared_1 + 71);  // B_18_0 > B_18_end_back size:= 1*char
//char *const B_19_0__B_19_end_back__01 = (char*) (Shared_1 + 72);  // B_19_0 > B_19_end_back size:= 1*char
//char *const B_20_0__B_20_end_back__01 = (char*) (Shared_1 + 73);  // B_20_0 > B_20_end_back size:= 1*char
//char *const B_21_0__B_21_end_back__01 = (char*) (Shared_1 + 74);  // B_21_0 > B_21_end_back size:= 1*char
//char *const B_22_0__B_22_end_back__01 = (char*) (Shared_1 + 75);  // B_22_0 > B_22_end_back size:= 1*char
//char *const B_23_0__B_23_end_back__01 = (char*) (Shared_1 + 1);  // B_23_0 > B_23_end_back size:= 1*char
//char *const B_24_0__B_24_end_back__01 = (char*) (Shared_1 + 2);  // B_24_0 > B_24_end_back size:= 1*char
//char *const B_25_0__B_25_end_back__01 = (char*) (Shared_1 + 3);  // B_25_0 > B_25_end_back size:= 1*char
//char *const B_27_0__B_27_end_back__01 = (char*) (Shared_1 + 4);  // B_27_0 > B_27_end_back size:= 1*char
//char *const B_28_0__B_28_end_back__01 = (char*) (Shared_1 + 5);  // B_28_0 > B_28_end_back size:= 1*char
//char *const B_29_0__B_29_end_back__01 = (char*) (Shared_1 + 6);  // B_29_0 > B_29_end_back size:= 1*char
//char *const B_30_0__B_30_end_back__01 = (char*) (Shared_1 + 7);  // B_30_0 > B_30_end_back size:= 1*char
//char *const B_31_0__B_31_end_back__01 = (char*) (Shared_1 + 8);  // B_31_0 > B_31_end_back size:= 1*char
//char *const B_32_0__B_33_0__01 = (char*) (Shared_1 + 10);  // B_32_0 > B_33_0 size:= 1*char
//char *const B_34_0__B_34_end_back__01 = (char*) (Shared_1 + 15);  // B_34_0 > B_34_end_back size:= 1*char
//char *const B_35_0__B_35_end_back__01 = (char*) (Shared_1 + 11);  // B_35_0 > B_35_end_back size:= 1*char
//char *const B_36_0__B_36_end_back__01 = (char*) (Shared_1 + 12);  // B_36_0 > B_36_end_back size:= 1*char
//char *const B_37_0__B_37_end_back__01 = (char*) (Shared_1 + 13);  // B_37_0 > B_37_end_back size:= 1*char
//char *const B_38_0__B_39_0__01 = (char*) (Shared_1 + 18);  // B_38_0 > B_39_0 size:= 1*char
//char *const B_33_0__B_33_end_back__01 = (char*) (Shared_1 + 9);  // B_33_0 > B_33_end_back size:= 1*char
//char *const B_39_0__snkD_0__01 = (char*) (Shared_1 + 10);  // B_39_0 > snkD_0 size:= 1*char
//char *const FIFO_Head_B_18_end_back__B_19_init_feed__01 = (char*) (Shared_1 + 76); // FIFO_Head_B_18_end_back > B_19_init_feed size:= 1*char
//char *const FIFO_Head_B_19_end_back__B_20_init_feed__01 = (char*) (Shared_1 + 77); // FIFO_Head_B_19_end_back > B_20_init_feed size:= 1*char
//char *const FIFO_Head_B_20_end_back__B_21_init_feed__01 = (char*) (Shared_1 + 78); // FIFO_Head_B_20_end_back > B_21_init_feed size:= 1*char
//char *const FIFO_Head_B_21_end_back__B_22_init_feed__01 = (char*) (Shared_1 + 79); // FIFO_Head_B_21_end_back > B_22_init_feed size:= 1*char
//char *const FIFO_Head_B_22_end_back__B_23_init_feed__01 = (char*) (Shared_1 + 80); // FIFO_Head_B_22_end_back > B_23_init_feed size:= 1*char
//char *const FIFO_Head_B_23_end_back__B_24_init_feed__01 = (char*) (Shared_1 + 81); // FIFO_Head_B_23_end_back > B_24_init_feed size:= 1*char
//char *const FIFO_Head_B_24_end_back__B_25_init_feed__01 = (char*) (Shared_1 + 82); // FIFO_Head_B_24_end_back > B_25_init_feed size:= 1*char
//char *const FIFO_Head_B_25_end_back__B_26_init_feed__01 = (char*) (Shared_1 + 83); // FIFO_Head_B_25_end_back > B_26_init_feed size:= 1*char
//char *const FIFO_Head_B_26_end_back__B_27_init_feed__01 = (char*) (Shared_1 + 84); // FIFO_Head_B_26_end_back > B_27_init_feed size:= 1*char
//char *const FIFO_Head_B_27_end_back__B_28_init_feed__01 = (char*) (Shared_1 + 85); // FIFO_Head_B_27_end_back > B_28_init_feed size:= 1*char
//char *const FIFO_Head_B_28_end_back__B_29_init_feed__01 = (char*) (Shared_1 + 86); // FIFO_Head_B_28_end_back > B_29_init_feed size:= 1*char
//char *const FIFO_Head_B_29_end_back__B_30_init_feed__01 = (char*) (Shared_1 + 87); // FIFO_Head_B_29_end_back > B_30_init_feed size:= 1*char
//char *const FIFO_Head_B_30_end_back__B_31_init_feed__01 = (char*) (Shared_1 + 88); // FIFO_Head_B_30_end_back > B_31_init_feed size:= 1*char
//char *const FIFO_Head_B_31_end_back__B_32_init_feed__01 = (char*) (Shared_1 + 89); // FIFO_Head_B_31_end_back > B_32_init_feed size:= 1*char
//char *const FIFO_Head_B_33_end_back__B_34_init_feed__01 = (char*) (Shared_1 + 90); // FIFO_Head_B_33_end_back > B_34_init_feed size:= 1*char
//char *const FIFO_Head_B_34_end_back__B_35_init_feed__01 = (char*) (Shared_1 + 91); // FIFO_Head_B_34_end_back > B_35_init_feed size:= 1*char
//char *const FIFO_Head_B_35_end_back__B_36_init_feed__01 = (char*) (Shared_1 + 92); // FIFO_Head_B_35_end_back > B_36_init_feed size:= 1*char
//char *const FIFO_Head_B_36_end_back__B_37_init_feed__01 = (char*) (Shared_1 + 93); // FIFO_Head_B_36_end_back > B_37_init_feed size:= 1*char
//char *const FIFO_Head_B_37_end_back__B_38_init_feed__01 = (char*) (Shared_1 + 94); // FIFO_Head_B_37_end_back > B_38_init_feed size:= 1*char
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
void* computationThread_Core5( uchar *outA0,  uchar *outD0,  uchar *outA1,  uchar *outB1,  uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_back__in__0;
	PREESM_MD5_Init(&preesm_md5_ctx_back__in__0);
#endif
if(initNode1){
//fifoInint ...
}
// loop body
    //src(out__feed__0); // srcD_0

    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort4_04__inB__01, feed__feed1__3, outB__newPort4_04__01, back__back1__5); // B_21_0

    sendStart(1, 4); // Core1 > Core4
    sendEnd(); // Core1 > Core4
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort10_10__inB__01, feed__feed1__9, outB__newPort10_10__01, back__back1__10); // B_27_0

    sendStart(1, 4); // Core1 > Core4
    sendEnd(); // Core1 > Core4
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort15_15__inB__01, feed__feed1__14, outB__newPort15_15__01, back__feed__01); // B_32_0

    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core5 > Core1
    receiveEnd(5, 1); // Core5 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort17_17__inB__01, feed__feed1__15, outB__newPort17_17__01, back__back1__15); // B_34_0

    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    //snk(back__in__0); // snkD_0
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_back__in__0,(char *)back__in__0, 1);
#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier_1);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_back__in__0);
	printf("preesm_md5_back__in__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

    return NULL;
}
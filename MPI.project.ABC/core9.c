//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_1;
extern int initNode1;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
extern char Shared_1[95]; //  size:= 95*char
extern char *const FIFO_Head_B_19_end_back__B_20_init_feed__0; // FIFO_Head_B_19_end_back > B_20_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__2;  // B_20_init_feed_feed > B_20_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_B_22_end_back__B_23_init_feed__0; // FIFO_Head_B_22_end_back > B_23_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__5;  // B_23_init_feed_feed > B_23_0_feed size:= 1*uchar defined in Core0
extern char *const B_23_init_feed__B_23_0__0;  // B_23_init_feed > B_23_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_25_end_back__B_26_init_feed__0; // FIFO_Head_B_25_end_back > B_26_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__8;  // B_26_init_feed_feed > B_26_0_feed size:= 1*uchar defined in Core0
extern char *const B_26_init_feed__B_26_0__0;  // B_26_init_feed > B_26_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_28_end_back__B_29_init_feed__0; // FIFO_Head_B_28_end_back > B_29_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__11;  // B_29_init_feed_feed > B_29_0_feed size:= 1*uchar defined in Core0
extern char *const B_29_init_feed__B_29_0__0;  // B_29_init_feed > B_29_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_33_end_back__B_34_init_feed__0; // FIFO_Head_B_33_end_back > B_34_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__15;  // B_34_init_feed_feed > B_34_0_feed size:= 1*uchar defined in Core0
extern char *const B_34_init_feed__B_34_0__0;  // B_34_init_feed > B_34_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_36_end_back__B_37_init_feed__0; // FIFO_Head_B_36_end_back > B_37_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__18;  // B_37_init_feed_feed > B_37_0_feed size:= 1*uchar defined in Core0
extern char *const B_37_init_feed__B_37_0__0;  // B_37_init_feed > B_37_0 size:= 1*char defined in Core0
extern char *const frk_0__B_20_0__0;  // frk_0 > B_20_0 size:= 1*char defined in Core0
extern uchar *const newPort3_03__inB__0;  // frk_0_newPort3_03 > B_20_0_inB size:= 1*uchar defined in Core0
extern uchar *const outB__newPort3_03__0;  // B_20_0_outB > jn_0_newPort3_03 size:= 1*uchar defined in Core0
extern uchar *const back__back__4;  // B_20_0_back > B_20_end_back_back size:= 1*uchar defined in Core0
extern char *const B_20_0__B_20_end_back__0;  // B_20_0 > B_20_end_back size:= 1*char defined in Core0
extern char *const B_20_0__jn_0__0;  // B_20_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_25_init_feed__B_25_0__0;  // B_25_init_feed > B_25_0 size:= 1*char defined in Core0
extern char *const frk_0__B_25_0__0;  // frk_0 > B_25_0 size:= 1*char defined in Core0
extern uchar *const newPort8_08__inB__0;  // frk_0_newPort8_08 > B_25_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__7;  // B_25_init_feed_feed > B_25_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort8_08__0;  // B_25_0_outB > jn_0_newPort8_08 size:= 1*uchar defined in Core0
extern uchar *const back__back__9;  // B_25_0_back > B_25_end_back_back size:= 1*uchar defined in Core0
extern char *const B_25_0__jn_0__0;  // B_25_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_31_init_feed__B_31_0__0;  // B_31_init_feed > B_31_0 size:= 1*char defined in Core0
extern char *const frk_0__B_31_0__0;  // frk_0 > B_31_0 size:= 1*char defined in Core0
extern uchar *const newPort14_14__inB__0;  // frk_0_newPort14_14 > B_31_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__13;  // B_31_init_feed_feed > B_31_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort14_14__0;  // B_31_0_outB > jn_0_newPort14_14 size:= 1*uchar defined in Core0
extern uchar *const back__back__14;  // B_31_0_back > B_31_end_back_back size:= 1*uchar defined in Core0
extern char *const B_31_0__B_31_end_back__0;  // B_31_0 > B_31_end_back size:= 1*char defined in Core0
extern char *const B_31_0__jn_0__0;  // B_31_0 > jn_0 size:= 1*char defined in Core0
extern char *const frk_0__snkA_0__0;  // frk_0 > snkA_0 size:= 20*char defined in Core0
extern uchar *const newPort35_23__in__0;  // frk_0_newPort35_23 > snkA_0_in size:= 20*uchar defined in Core0
extern char *const B_19_0__B_19_end_back__0;  // B_19_0 > B_19_end_back size:= 1*char defined in Core0
extern uchar *const back__back__3;  // B_19_0_back > B_19_end_back_back size:= 1*uchar defined in Core0
extern char *const B_22_0__B_22_end_back__0;  // B_22_0 > B_22_end_back size:= 1*char defined in Core0
extern uchar *const back__back__6;  // B_22_0_back > B_22_end_back_back size:= 1*uchar defined in Core0
extern char *const B_28_0__B_28_end_back__0;  // B_28_0 > B_28_end_back size:= 1*char defined in Core0
extern uchar *const back__back__11;  // B_28_0_back > B_28_end_back_back size:= 1*uchar defined in Core0
extern char *const B_36_0__B_36_end_back__0;  // B_36_0 > B_36_end_back size:= 1*char defined in Core0
extern uchar *const back__back__17;  // B_36_0_back > B_36_end_back_back size:= 1*uchar defined in Core0
extern char *const B_33_0__B_33_end_back__0;  // B_33_0 > B_33_end_back size:= 1*char defined in Core0
extern uchar *const back__back__19;  // B_33_0_back > B_33_end_back_back size:= 1*uchar defined in Core0
void* computationThread_Core9(uchar *outA0, uchar *outD0, uchar *outA1, uchar *outB1, uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_newPort35_23__in__0;
	PREESM_MD5_Init(&preesm_md5_ctx_newPort35_23__in__0);
#endif
if(initNode1){
    // Initialisation(s)

    fifoInit(FIFO_Head_B_19_end_back__B_20_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_B_22_end_back__B_23_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_B_25_end_back__B_26_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_B_28_end_back__B_29_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_B_33_end_back__B_34_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_B_36_end_back__B_37_init_feed__0, 1, NULL, 0); // 1 * char
     }
    // loop body
    fifoPop(feed__feed__2, FIFO_Head_B_19_end_back__B_20_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed__5, FIFO_Head_B_22_end_back__B_23_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    fifoPop(feed__feed__8, FIFO_Head_B_25_end_back__B_26_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    fifoPop(feed__feed__11, FIFO_Head_B_28_end_back__B_29_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    fifoPop(feed__feed__15, FIFO_Head_B_33_end_back__B_34_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 1); // Core5 > Core1
    sendEnd(); // Core5 > Core1
    fifoPop(feed__feed__18, FIFO_Head_B_36_end_back__B_37_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 4); // Core5 > Core4
    sendEnd(); // Core5 > Core4
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    B(newPort3_03__inB__0, feed__feed__2, outB__newPort3_03__0, back__back__4); // B_20_0

    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    receiveStart(); // Core4 > Core5
    receiveEnd(4, 5); // Core4 > Core5
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    B(newPort8_08__inB__0, feed__feed__7, outB__newPort8_08__0, back__back__9); // B_25_0

    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    receiveStart(); // Core4 > Core5
    receiveEnd(4, 5); // Core4 > Core5
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    B(newPort14_14__inB__0, feed__feed__13, outB__newPort14_14__0, back__back__14); // B_31_0

    sendStart(5, 2); // Core5 > Core2
    sendEnd(); // Core5 > Core2
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    //snk(newPort35_23__in__0); // snkA_0
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_newPort35_23__in__0,(char *)newPort35_23__in__0, 20);
#endif

    receiveStart(); // Core4 > Core5
    receiveEnd(4, 5); // Core4 > Core5
    fifoPush(back__back__3, FIFO_Head_B_19_end_back__B_20_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core2 > Core5
    receiveEnd(2, 5); // Core2 > Core5
    fifoPush(back__back__6, FIFO_Head_B_22_end_back__B_23_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPush(back__back__9, FIFO_Head_B_25_end_back__B_26_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core2 > Core5
    receiveEnd(2, 5); // Core2 > Core5
    fifoPush(back__back__11, FIFO_Head_B_28_end_back__B_29_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core3 > Core5
    receiveEnd(3, 5); // Core3 > Core5
    fifoPush(back__back__17, FIFO_Head_B_36_end_back__B_37_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    fifoPush(back__back__19, FIFO_Head_B_33_end_back__B_34_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier_1);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_newPort35_23__in__0);
	printf("preesm_md5_newPort35_23__in__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

    return NULL;
}
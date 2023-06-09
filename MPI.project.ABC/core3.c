//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_0;
extern int initNode0;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
extern uchar *const outA__outA_0__0;  // A_0_outA > implode_A_end_outA_outA_outA_0 size:= 20*uchar defined in Core0
extern char *const A_0__implode_A_end_outA_outA__0;  // A_0 > implode_A_end_outA_outA size:= 20*char defined in Core0
extern char Shared_0[553]; //  size:= 553*char
extern char *const FIFO_Head_B_10_end_back__B_11_init_feed__0; // FIFO_Head_B_10_end_back > B_11_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__10;  // B_11_init_feed_feed > B_11_0_feed size:= 1*uchar defined in Core0
extern char *const B_11_init_feed__B_11_0__0;  // B_11_init_feed > B_11_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_12_end_back__B_13_init_feed__0; // FIFO_Head_B_12_end_back > B_13_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__12;  // B_13_init_feed_feed > B_13_0_feed size:= 1*uchar defined in Core0
extern char *const B_13_init_feed__B_13_0__0;  // B_13_init_feed > B_13_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_15_end_back__B_16_init_feed__0; // FIFO_Head_B_15_end_back > B_16_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__15;  // B_16_init_feed_feed > B_16_0_feed size:= 1*uchar defined in Core0
extern char *const B_16_init_feed__B_16_0__0;  // B_16_init_feed > B_16_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_3_end_back__B_4_init_feed__0; // FIFO_Head_B_3_end_back > B_4_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__3;  // B_4_init_feed_feed > B_4_0_feed size:= 1*uchar defined in Core0
extern char *const B_4_init_feed__B_4_0__0;  // B_4_init_feed > B_4_0 size:= 1*char defined in Core0
extern char *const FIFO_Head_B_6_end_back__B_7_init_feed__0; // FIFO_Head_B_6_end_back > B_7_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__6;  // B_7_init_feed_feed > B_7_0_feed size:= 1*uchar defined in Core0
extern char *const B_12_init_feed__B_12_0__0;  // B_12_init_feed > B_12_0 size:= 1*char defined in Core0
extern char *const frk_0__B_3_0__0;  // frk_0 > B_3_0 size:= 1*char defined in Core0
extern char *const frk_0__B_7_0__0;  // frk_0 > B_7_0 size:= 1*char defined in Core0
extern char *const frk_0__B_12_0__0;  // frk_0 > B_12_0 size:= 1*char defined in Core0
extern uchar *const newPort12_12__inB__0;  // frk_0_newPort12_12 > B_12_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__11;  // B_12_init_feed_feed > B_12_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort12_12__0;  // B_12_0_outB > jn_0_newPort12_12 size:= 1*uchar defined in Core0
extern uchar *const back__back__13;  // B_12_0_back > B_12_end_back_back size:= 1*uchar defined in Core0
extern char *const B_12_0__jn_0__0;  // B_12_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_15_init_feed__B_15_0__0;  // B_15_init_feed > B_15_0 size:= 1*char defined in Core0
extern char *const frk_0__B_15_0__0;  // frk_0 > B_15_0 size:= 1*char defined in Core0
extern uchar *const newPort15_15__inB__0;  // frk_0_newPort15_15 > B_15_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__14;  // B_15_init_feed_feed > B_15_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort15_15__0;  // B_15_0_outB > jn_0_newPort15_15 size:= 1*uchar defined in Core0
extern uchar *const back__back__15;  // B_15_0_back > B_15_end_back_back size:= 1*uchar defined in Core0
extern char *const B_15_0__jn_0__0;  // B_15_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_3_init_feed__B_3_0__0;  // B_3_init_feed > B_3_0 size:= 1*char defined in Core0
extern uchar *const newPort3_03__inB__0;  // frk_0_newPort3_03 > B_3_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__2;  // B_3_init_feed_feed > B_3_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort3_03__0;  // B_3_0_outB > jn_0_newPort3_03 size:= 1*uchar defined in Core0
extern uchar *const back__back__7;  // B_3_0_back > B_3_end_back_back size:= 1*uchar defined in Core0
extern char *const B_3_0__jn_0__0;  // B_3_0 > jn_0 size:= 1*char defined in Core0
extern uchar *const newPort7_07__inB__0;  // frk_0_newPort7_07 > B_7_0_inB size:= 1*uchar defined in Core0
extern uchar *const outB__newPort7_07__0;  // B_7_0_outB > jn_0_newPort7_07 size:= 1*uchar defined in Core0
extern uchar *const back__back__10;  // B_7_0_back > B_7_end_back_back size:= 1*uchar defined in Core0
extern char *const B_7_0__B_7_end_back__0;  // B_7_0 > B_7_end_back size:= 1*char defined in Core0
extern char *const B_7_0__jn_0__0;  // B_7_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_10_0__B_10_end_back__0;  // B_10_0 > B_10_end_back size:= 1*char defined in Core0
extern uchar *const back__back__3;  // B_10_0_back > B_10_end_back_back size:= 1*uchar defined in Core0
extern char *const B_6_0__B_6_end_back__0;  // B_6_0 > B_6_end_back size:= 1*char defined in Core0
extern uchar *const back__back__9;  // B_6_0_back > B_6_end_back_back size:= 1*uchar defined in Core0
extern char *const B_16_0__snk2_0__0;  // B_16_0 > snk2_0 size:= 1*char defined in Core0
extern uchar *const back__in__0;  // B_16_0_back > snk2_0_in size:= 1*uchar defined in Core0

void* computationThread_Core3(uchar *outA0, uchar *outB0, uchar *outD0) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_back__in__0;
	PREESM_MD5_Init(&preesm_md5_ctx_back__in__0);
#endif
    if(initNode0){
// Initialisation(s)
        fifoInit(FIFO_Head_B_10_end_back__B_11_init_feed__0, 1 * sizeof(char), NULL, 0);
        fifoInit(FIFO_Head_B_12_end_back__B_13_init_feed__0, 1 * sizeof(char), NULL, 0);
        fifoInit(FIFO_Head_B_15_end_back__B_16_init_feed__0, 1 * sizeof(char), NULL, 0);
        fifoInit(FIFO_Head_B_3_end_back__B_4_init_feed__0, 1 * sizeof(char), NULL, 0);
        fifoInit(FIFO_Head_B_6_end_back__B_7_init_feed__0, 1 * sizeof(char), NULL, 0);
    }
// loop body
    A(outA__outA_0__0); // A_0

    sendStart(3, 2); // Core3 > Core2
    sendEnd(); // Core3 > Core2
    fifoPop(feed__feed__10, FIFO_Head_B_10_end_back__B_11_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(3, 2); // Core3 > Core2
    sendEnd(); // Core3 > Core2
    fifoPop(feed__feed__12, FIFO_Head_B_12_end_back__B_13_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    fifoPop(feed__feed__15, FIFO_Head_B_15_end_back__B_16_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    fifoPop(feed__feed__3, FIFO_Head_B_3_end_back__B_4_init_feed__0, 1 * sizeof(char), NULL, 0);
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    fifoPop(feed__feed__6, FIFO_Head_B_6_end_back__B_7_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core2 > Core3
    receiveEnd(2, 3); // Core2 > Core3
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    B(newPort12_12__inB__0, feed__feed__11, outB__newPort12_12__0, back__back__13); // B_12_0

    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    receiveStart(); // Core2 > Core3
    receiveEnd(2, 3); // Core2 > Core3
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    B(newPort15_15__inB__0, feed__feed__14, outB__newPort15_15__0, back__back__15); // B_15_0

    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    receiveStart(); // Core2 > Core3
    receiveEnd(2, 3); // Core2 > Core3
    B(newPort3_03__inB__0, feed__feed__2, outB__newPort3_03__0, back__back__7); // B_3_0

    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    B(newPort7_07__inB__0, feed__feed__6, outB__newPort7_07__0, back__back__10); // B_7_0

    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    sendStart(3, 1); // Core3 > Core1
    sendEnd(); // Core3 > Core1
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    fifoPush(back__back__3, FIFO_Head_B_10_end_back__B_11_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPush(back__back__13, FIFO_Head_B_12_end_back__B_13_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPush(back__back__15, FIFO_Head_B_15_end_back__B_16_init_feed__0, 1 * sizeof(char), NULL, 0);
    fifoPush(back__back__7, FIFO_Head_B_3_end_back__B_4_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core2 > Core3
    receiveEnd(2, 3); // Core2 > Core3
    fifoPush(back__back__9, FIFO_Head_B_6_end_back__B_7_init_feed__0, 1 * sizeof(char), NULL, 0);
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    //get(back__in__0); // snk2_0
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_back__in__0,(char *)back__in__0, 1);
#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier_0);
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
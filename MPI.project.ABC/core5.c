//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_1;
extern int initNode1;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
extern uchar *const out__feed__0;  // srcD_0_out > B_17_0_feed size:= 1*uchar defined in Core0
extern char *const srcD_0__B_17_0__0;  // srcD_0 > B_17_0 size:= 1*char defined in Core0
extern char *const B_21_init_feed__B_21_0__0;  // B_21_init_feed > B_21_0 size:= 1*char defined in Core0
extern char *const frk_0__B_21_0__0;  // frk_0 > B_21_0 size:= 1*char defined in Core0
extern uchar *const newPort4_04__inB__0;  // frk_0_newPort4_04 > B_21_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__3;  // B_21_init_feed_feed > B_21_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort4_04__0;  // B_21_0_outB > jn_0_newPort4_04 size:= 1*uchar defined in Core0
extern uchar *const back__back__5;  // B_21_0_back > B_21_end_back_back size:= 1*uchar defined in Core0
extern char *const B_21_0__B_21_end_back__0;  // B_21_0 > B_21_end_back size:= 1*char defined in Core0
extern char *const B_21_0__jn_0__0;  // B_21_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_27_init_feed__B_27_0__0;  // B_27_init_feed > B_27_0 size:= 1*char defined in Core0
extern char *const frk_0__B_27_0__0;  // frk_0 > B_27_0 size:= 1*char defined in Core0
extern uchar *const newPort10_10__inB__0;  // frk_0_newPort10_10 > B_27_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__9;  // B_27_init_feed_feed > B_27_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort10_10__0;  // B_27_0_outB > jn_0_newPort10_10 size:= 1*uchar defined in Core0
extern uchar *const back__back__10;  // B_27_0_back > B_27_end_back_back size:= 1*uchar defined in Core0
extern char *const B_27_0__B_27_end_back__0;  // B_27_0 > B_27_end_back size:= 1*char defined in Core0
extern char *const B_27_0__jn_0__0;  // B_27_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_32_init_feed__B_32_0__0;  // B_32_init_feed > B_32_0 size:= 1*char defined in Core0
extern char *const frk_0__B_32_0__0;  // frk_0 > B_32_0 size:= 1*char defined in Core0
extern uchar *const newPort15_15__inB__0;  // frk_0_newPort15_15 > B_32_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__14;  // B_32_init_feed_feed > B_32_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort15_15__0;  // B_32_0_outB > jn_0_newPort15_15 size:= 1*uchar defined in Core0
extern uchar *const back__feed__0;  // B_32_0_back > B_33_0_feed size:= 1*uchar defined in Core0
extern char *const B_32_0__B_33_0__0;  // B_32_0 > B_33_0 size:= 1*char defined in Core0
extern char *const B_32_0__jn_0__0;  // B_32_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_34_init_feed__B_34_0__0;  // B_34_init_feed > B_34_0 size:= 1*char defined in Core0
extern char *const frk_0__B_34_0__0;  // frk_0 > B_34_0 size:= 1*char defined in Core0
extern uchar *const newPort17_17__inB__0;  // frk_0_newPort17_17 > B_34_0_inB size:= 1*uchar defined in Core0
extern uchar *const feed__feed__15;  // B_34_init_feed_feed > B_34_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__newPort17_17__0;  // B_34_0_outB > jn_0_newPort17_17 size:= 1*uchar defined in Core0
extern uchar *const back__back__15;  // B_34_0_back > B_34_end_back_back size:= 1*uchar defined in Core0
extern char *const B_34_0__B_34_end_back__0;  // B_34_0 > B_34_end_back size:= 1*char defined in Core0
extern char *const B_34_0__jn_0__0;  // B_34_0 > jn_0 size:= 1*char defined in Core0
extern char *const B_39_0__snkD_0__0;  // B_39_0 > snkD_0 size:= 1*char defined in Core0
extern uchar *const back__in__0;  // B_39_0_back > snkD_0_in size:= 1*uchar defined in Core0
void* computationThread_Core5(uchar *outA0, uchar *outD0, uchar *outA1, uchar *outB1, uchar *outD1) {
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
    B(newPort4_04__inB__0, feed__feed__3, outB__newPort4_04__0, back__back__5); // B_21_0

    sendStart(1, 4); // Core1 > Core4
    sendEnd(); // Core1 > Core4
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core3 > Core1
    receiveEnd(3, 1); // Core3 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort10_10__inB__0, feed__feed__9, outB__newPort10_10__0, back__back__10); // B_27_0

    sendStart(1, 4); // Core1 > Core4
    sendEnd(); // Core1 > Core4
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort15_15__inB__0, feed__feed__14, outB__newPort15_15__0, back__feed__0); // B_32_0

    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core5 > Core1
    receiveEnd(5, 1); // Core5 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort17_17__inB__0, feed__feed__15, outB__newPort17_17__0, back__back__15); // B_34_0

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
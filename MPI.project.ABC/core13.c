//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_2;
extern int initNode2;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
extern char Shared_2[121]; //  size:= 121*char
extern char *const FIFO_Head_OB_2_end_back__OB_3_init_feed__0; // FIFO_Head_OB_2_end_back > OB_3_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__2;  // OB_3_init_feed_feed > OB_3_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_OB_6_end_back__OB_7_init_feed__0; // FIFO_Head_OB_6_end_back > OB_7_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__6;  // OB_7_init_feed_feed > OB_7_0_feed size:= 1*uchar defined in Core0
extern char *const OB_7_init_feed__OB_7_0__0;  // OB_7_init_feed > OB_7_0 size:= 1*char defined in Core0
extern uchar *const out__inC__0;  // src_B1_0_out > explode_src_B1_0_out_inC size:= 23*uchar defined in Core0
extern char *const src_B1_0__explode_src_B1_0_out__0; // src_B1_0 > explode_src_B1_0_out size:= 23*char defined in Core0
extern char *const frk_0__OB_3_0__0;  // frk_0 > OB_3_0 size:= 2*char defined in Core0
extern uchar *const newPort3_3__inB__0;  // frk_0_newPort3_3 > OB_3_0_inB size:= 2*uchar defined in Core0
extern uchar *const outB__inC_0__1;  // OB_3_0_outB > implode_OC_1_inC_inC_0 size:= 2*uchar defined in Core0
extern uchar *const back__back__3;  // OB_3_0_back > OB_3_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_3_0__OB_3_end_back__0;  // OB_3_0 > OB_3_end_back size:= 1*char defined in Core0
extern char *const OB_3_0__implode_OC_1_inC__0;  // OB_3_0 > implode_OC_1_inC size:= 2*char defined in Core0
extern char *const OB_8_init_feed__OB_8_0__0;  // OB_8_init_feed > OB_8_0 size:= 1*char defined in Core0
extern char *const frk_0__OB_8_0__0;  // frk_0 > OB_8_0 size:= 2*char defined in Core0
extern uchar *const newPort8_8__inB__0;  // frk_0_newPort8_8 > OB_8_0_inB size:= 2*uchar defined in Core0
extern uchar *const feed__feed__7;  // OB_8_init_feed_feed > OB_8_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_2__2;  // OB_8_0_outB > implode_OC_2_inC_inC_2 size:= 2*uchar defined in Core0
extern uchar *const back__back__8;  // OB_8_0_back > OB_8_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_8_0__OB_8_end_back__0;  // OB_8_0 > OB_8_end_back size:= 1*char defined in Core0
extern char *const OB_8_0__implode_OC_2_inC__0;  // OB_8_0 > implode_OC_2_inC size:= 2*char defined in Core0
extern char *const explode_src_B0_0_out__OC_4__0;  // explode_src_B0_0_out > OC_4 size:= 6*char defined in Core0
extern uchar *const out_1__inC__0;  // explode_src_B0_0_out_out_1 > OC_4_inC size:= 6*uchar defined in Core0
extern char *const explode_src_B1_0_out__OC_9__0;  // explode_src_B1_0_out > OC_9 size:= 6*char defined in Core0
extern uchar *const out_3__inC__0;  // explode_src_B1_0_out_out_3 > OC_9_inC size:= 6*uchar defined in Core0
extern char *const OB_2_0__OB_2_end_back__0;  // OB_2_0 > OB_2_end_back size:= 1*char defined in Core0
extern uchar *const back__back__2;  // OB_2_0_back > OB_2_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_6_0__OB_6_end_back__0;  // OB_6_0 > OB_6_end_back size:= 1*char defined in Core0
extern uchar *const back__back__6;  // OB_6_0_back > OB_6_end_back_back size:= 1*uchar defined in Core0
void* computationThread_Core13(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_out_1__inC__0;
	PREESM_MD5_Init(&preesm_md5_ctx_out_1__inC__0);
	PREESM_MD5_CTX preesm_md5_ctx_out_3__inC__0;
	PREESM_MD5_Init(&preesm_md5_ctx_out_3__inC__0);
#endif
if(initNode2){
    // Initialisation(s)

    fifoInit(FIFO_Head_OB_2_end_back__OB_3_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
}
// loop body
    fifoPop(feed__feed__2, FIFO_Head_OB_2_end_back__OB_3_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed__6, FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 2); // Core3 > Core2
    sendEnd(); // Core3 > Core2
    //src(out__inC__0); // src_B1_0

    sendStart(3, 5); // Core3 > Core5
    sendEnd(); // Core3 > Core5
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    B(newPort3_3__inB__0, feed__feed__2, outB__inC_0__1, back__back__3); // OB_3_0

    sendStart(3, 4); // Core3 > Core4
    sendEnd(); // Core3 > Core4
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core4 > Core3
    receiveEnd(4, 3); // Core4 > Core3
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    B(newPort8_8__inB__0, feed__feed__7, outB__inC_2__2, back__back__8); // OB_8_0

    sendStart(3, 5); // Core3 > Core5
    sendEnd(); // Core3 > Core5
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core5 > Core3
    receiveEnd(5, 3); // Core5 > Core3
    OC(out_1__inC__0); // OC_4
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_out_1__inC__0,(char *)out_1__inC__0, 6);
#endif

    receiveStart(); // Core5 > Core3
    receiveEnd(5, 3); // Core5 > Core3
    OC(out_3__inC__0); // OC_9
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_out_3__inC__0,(char *)out_3__inC__0, 6);
#endif

    receiveStart(); // Core2 > Core3
    receiveEnd(2, 3); // Core2 > Core3
    fifoPush(back__back__2, FIFO_Head_OB_2_end_back__OB_3_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    fifoPush(back__back__6, FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier_2);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out_1__inC__0);
	printf("preesm_md5_out_1__inC__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out_3__inC__0);
	printf("preesm_md5_out_3__inC__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

    return NULL;
}
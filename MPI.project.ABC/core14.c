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
extern char *const FIFO_Head_OB_3_end_back__OB_4_init_feed__0; // FIFO_Head_OB_3_end_back > OB_4_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__3;  // OB_4_init_feed_feed > OB_4_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_OB_7_end_back__OB_8_init_feed__0; // FIFO_Head_OB_7_end_back > OB_8_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__7;  // OB_8_init_feed_feed > OB_8_0_feed size:= 1*uchar defined in Core0
extern char *const OB_8_init_feed__OB_8_0__0;  // OB_8_init_feed > OB_8_0 size:= 1*char defined in Core0
extern char *const frk_0__OB_4_0__0;  // frk_0 > OB_4_0 size:= 2*char defined in Core0
extern uchar *const newPort4_4__inB__0;  // frk_0_newPort4_4 > OB_4_0_inB size:= 2*uchar defined in Core0
extern uchar *const outB__inC_1__1;  // OB_4_0_outB > implode_OC_1_inC_inC_1 size:= 2*uchar defined in Core0
extern uchar *const back__back__4;  // OB_4_0_back > OB_4_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_4_0__OB_4_end_back__0;  // OB_4_0 > OB_4_end_back size:= 1*char defined in Core0
extern char *const OB_4_0__implode_OC_1_inC__0;  // OB_4_0 > implode_OC_1_inC size:= 2*char defined in Core0
extern char *const OB_9_init_feed__OB_9_0__0;  // OB_9_init_feed > OB_9_0 size:= 1*char defined in Core0
extern char *const frk_0__OB_9_0__0;  // frk_0 > OB_9_0 size:= 2*char defined in Core0
extern uchar *const newPort9_9__inB__0;  // frk_0_newPort9_9 > OB_9_0_inB size:= 2*uchar defined in Core0
extern uchar *const feed__feed__8;  // OB_9_init_feed_feed > OB_9_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_0__3;  // OB_9_0_outB > implode_OC_3_inC_inC_0 size:= 2*uchar defined in Core0
extern uchar *const back__in__0;  // OB_9_0_back > get_0_in size:= 1*uchar defined in Core0
extern char *const OB_9_0__implode_OC_3_inC__0;  // OB_9_0 > implode_OC_3_inC size:= 2*char defined in Core0
extern char *const explode_src_B0_0_out__OC_5__0;  // explode_src_B0_0_out > OC_5 size:= 6*char defined in Core0
extern uchar *const out_2__inC__0;  // explode_src_B0_0_out_out_2 > OC_5_inC size:= 6*uchar defined in Core0
extern char *const OB_3_0__OB_3_end_back__0;  // OB_3_0 > OB_3_end_back size:= 1*char defined in Core0
extern uchar *const back__back__3;  // OB_3_0_back > OB_3_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_7_0__OB_7_end_back__0;  // OB_7_0 > OB_7_end_back size:= 1*char defined in Core0
extern uchar *const back__back__7;  // OB_7_0_back > OB_7_end_back_back size:= 1*uchar defined in Core0
void* computationThread_Core14(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_out_2__inC__0;
	PREESM_MD5_Init(&preesm_md5_ctx_out_2__inC__0);
	PREESM_MD5_CTX preesm_md5_ctx_back__in__0;
	PREESM_MD5_Init(&preesm_md5_ctx_back__in__0);
#endif
if(initNode2){
// Initialisation(s)

    fifoInit(FIFO_Head_OB_3_end_back__OB_4_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_OB_7_end_back__OB_8_init_feed__0, 1, NULL, 0); // 1 * char
}
// loop body
    fifoPop(feed__feed__3, FIFO_Head_OB_3_end_back__OB_4_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed__7, FIFO_Head_OB_7_end_back__OB_8_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 3); // Core4 > Core3
    sendEnd(); // Core4 > Core3
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    B(newPort4_4__inB__0, feed__feed__3, outB__inC_1__1, back__back__4); // OB_4_0

    sendStart(4, 5); // Core4 > Core5
    sendEnd(); // Core4 > Core5
    sendStart(4, 0); // Core4 > Core0
    sendEnd(); // Core4 > Core0
    receiveStart(); // Core5 > Core4
    receiveEnd(5, 4); // Core5 > Core4
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    B(newPort9_9__inB__0, feed__feed__8, outB__inC_0__3, back__in__0); // OB_9_0

    sendStart(4, 1); // Core4 > Core1
    sendEnd(); // Core4 > Core1
    receiveStart(); // Core5 > Core4
    receiveEnd(5, 4); // Core5 > Core4
    OC(out_2__inC__0); // OC_5
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_out_2__inC__0,(char *)out_2__inC__0, 6);
#endif

    receiveStart(); // Core3 > Core4
    receiveEnd(3, 4); // Core3 > Core4
    fifoPush(back__back__3, FIFO_Head_OB_3_end_back__OB_4_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core2 > Core4
    receiveEnd(2, 4); // Core2 > Core4
    fifoPush(back__back__7, FIFO_Head_OB_7_end_back__OB_8_init_feed__0, 1, NULL, 0); // 1 * char
    get(back__in__0); // get_0
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_back__in__0,(char *)back__in__0, 1);
#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier_2);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out_2__inC__0);
	printf("preesm_md5_out_2__inC__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
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
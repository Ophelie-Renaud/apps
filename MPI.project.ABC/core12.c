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
extern char *const FIFO_Head_OB_1_end_back__OB_2_init_feed__0; // FIFO_Head_OB_1_end_back > OB_2_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__1;  // OB_2_init_feed_feed > OB_2_0_feed size:= 1*uchar defined in Core0
extern char *const FIFO_Head_OB_5_end_back__OB_6_init_feed__0; // FIFO_Head_OB_5_end_back > OB_6_init_feed size:= 1*char defined in Core0
extern uchar *const feed__feed__5;  // OB_6_init_feed_feed > OB_6_0_feed size:= 1*uchar defined in Core0
extern char *const OB_6_init_feed__OB_6_0__0;  // OB_6_init_feed > OB_6_0 size:= 1*char defined in Core0
extern uchar *const out__inC__1;  // src_B0_0_out > explode_src_B0_0_out_inC size:= 17*uchar defined in Core0
extern char *const src_B0_0__explode_src_B0_0_out__0; // src_B0_0 > explode_src_B0_0_out size:= 17*char defined in Core0
extern char *const frk_0__OB_2_0__0;  // frk_0 > OB_2_0 size:= 2*char defined in Core0
extern uchar *const newPort2_2__inB__0;  // frk_0_newPort2_2 > OB_2_0_inB size:= 2*uchar defined in Core0
extern uchar *const outB__inC_2__0;  // OB_2_0_outB > implode_OC_0_inC_inC_2 size:= 2*uchar defined in Core0
extern uchar *const back__back__2;  // OB_2_0_back > OB_2_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_2_0__OB_2_end_back__0;  // OB_2_0 > OB_2_end_back size:= 1*char defined in Core0
extern char *const OB_2_0__implode_OC_0_inC__0;  // OB_2_0 > implode_OC_0_inC size:= 2*char defined in Core0
extern char *const OB_7_init_feed__OB_7_0__0;  // OB_7_init_feed > OB_7_0 size:= 1*char defined in Core0
extern char *const frk_0__OB_7_0__0;  // frk_0 > OB_7_0 size:= 2*char defined in Core0
extern uchar *const newPort7_7__inB__0;  // frk_0_newPort7_7 > OB_7_0_inB size:= 2*uchar defined in Core0
extern uchar *const feed__feed__6;  // OB_7_init_feed_feed > OB_7_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_1__2;  // OB_7_0_outB > implode_OC_2_inC_inC_1 size:= 2*uchar defined in Core0
extern uchar *const back__back__7;  // OB_7_0_back > OB_7_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_7_0__OB_7_end_back__0;  // OB_7_0 > OB_7_end_back size:= 1*char defined in Core0
extern char *const OB_7_0__implode_OC_2_inC__0;  // OB_7_0 > implode_OC_2_inC size:= 2*char defined in Core0
extern char *const explode_src_B1_0_out__OC_8__0;  // explode_src_B1_0_out > OC_8 size:= 6*char defined in Core0
extern uchar *const out_2__inC__1;  // explode_src_B1_0_out_out_2 > OC_8_inC size:= 6*uchar defined in Core0
extern char *const OB_1_0__OB_1_end_back__0;  // OB_1_0 > OB_1_end_back size:= 1*char defined in Core0
extern uchar *const back__back__1;  // OB_1_0_back > OB_1_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_5_0__OB_5_end_back__0;  // OB_5_0 > OB_5_end_back size:= 1*char defined in Core0
extern uchar *const back__back__5;  // OB_5_0_back > OB_5_end_back_back size:= 1*uchar defined in Core0
extern char *const implode_OC_1_inC__OC_1__0;  // implode_OC_1_inC > OC_1 size:= 6*char defined in Core0
extern uchar *const outB__inC__1;  // implode_OC_1_inC_outB > OC_1_inC size:= 6*uchar defined in Core0
void* computationThread_Core12(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_out_2__inC__1;
	PREESM_MD5_Init(&preesm_md5_ctx_out_2__inC__1);
	PREESM_MD5_CTX preesm_md5_ctx_outB__inC__1;
	PREESM_MD5_Init(&preesm_md5_ctx_outB__inC__1);
#endif
//Initialisaton
if(initNode2){
    // Initialisation(s)

    fifoInit(FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_OB_5_end_back__OB_6_init_feed__0, 1, NULL, 0); // 1 * char
}
// loop body
    fifoPop(feed__feed__1, FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed__5, FIFO_Head_OB_5_end_back__OB_6_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    //src(out__inC__1); // src_B0_0

    sendStart(2, 5); // Core2 > Core5
    sendEnd(); // Core2 > Core5
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort2_2__inB__0, feed__feed__1, outB__inC_2__0, back__back__2); // OB_2_0

    sendStart(2, 3); // Core2 > Core3
    sendEnd(); // Core2 > Core3
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    B(newPort7_7__inB__0, feed__feed__6, outB__inC_1__2, back__back__7); // OB_7_0

    sendStart(2, 4); // Core2 > Core4
    sendEnd(); // Core2 > Core4
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core5 > Core2
    receiveEnd(5, 2); // Core5 > Core2
    OC(out_2__inC__1); // OC_8
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_out_2__inC__1,(char *)out_2__inC__1, 6);
#endif

    receiveStart(); // Core1 > Core2
    receiveEnd(1, 2); // Core1 > Core2
    fifoPush(back__back__1, FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core5 > Core2
    receiveEnd(5, 2); // Core5 > Core2
    fifoPush(back__back__5, FIFO_Head_OB_5_end_back__OB_6_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    OC(outB__inC__1); // OC_1
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_outB__inC__1,(char *)outB__inC__1, 6);
#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier_2);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out_2__inC__1);
	printf("preesm_md5_out_2__inC__1 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_outB__inC__1);
	printf("preesm_md5_outB__inC__1 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

    return NULL;
}
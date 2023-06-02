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

extern char *const FIFO_Head_OB_5_end_back__OB_6_init_feed__0; // FIFO_Head_OB_5_end_back > OB_6_init_feed size:= 1*char defined in Core0
extern uchar *const out__in__02 ;
extern uchar *const newPort_0__inB__0 ;
extern uchar *const newPort1_1__inB__0 ;
extern uchar *const newPort2_2__inB__0 ;
extern uchar *const newPort3_3__inB__0 ;
extern uchar *const newPort4_4__inB__0 ;
extern uchar *const newPort5_5__inB__0 ;
extern uchar *const newPort6_6__inB__0 ;
extern uchar *const newPort7_7__inB__0;
extern uchar *const newPort8_8__inB__0;
extern uchar *const newPort9_9__inB__0;
extern uchar *const out__inC__0;
extern uchar *const out__inC__1;
extern uchar *const out_1__inC__0;
extern uchar *const out_2__inC__0;
extern uchar *const out_1__inC__1;
extern uchar *const out_2__inC__1;
extern uchar *const out_3__inC__0;
extern uchar *const out__inC__2 ;
extern uchar *const outB__inC__0;
extern uchar *const outB__inC_0__0 ;
extern uchar *const outB__inC_1__0;
extern uchar *const outB__inC_2__0;
extern uchar *const outB__inC__1;
extern uchar *const outB__inC_0__1;
extern uchar *const outB__inC_1__1;
extern uchar *const outB__inC_2__1;
extern uchar *const outB__inC__2 ;
extern uchar *const outB__inC_0__2;
extern uchar *const outB__inC_1__2;
extern uchar *const outB__inC_2__2;
extern uchar *const outB__inC__3;
extern uchar *const outB__inC_0__3;
extern uchar *const feed__feed2__0;
extern uchar *const feed__feed2__1;
extern uchar *const feed__feed2__2;
extern uchar *const feed__feed2__3;
extern uchar *const feed__feed2__4;
extern uchar *const feed__feed2__5;
extern uchar *const feed__feed2__6;
extern uchar *const feed__feed2__7;
extern uchar *const feed__feed2__8;
extern uchar *const out__feed__02;
extern uchar *const back__back2__0;
extern uchar *const back__back2__1;
extern uchar *const back__back2__2;
extern uchar *const back__back2__3;
extern uchar *const back__back2__4;
extern uchar *const back__back2__5;
extern uchar *const back__back2__6;
extern uchar *const back__back2__7;
extern uchar *const back__back2__8;
extern uchar *const back__in__02;
extern char *const out_0__inC_1__0;
extern char *const out_3__inC_0__0;
extern char *const out_0__inC_1__1;
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
    fifoPop(feed__feed2__1, FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed2__5, FIFO_Head_OB_5_end_back__OB_6_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(2, 1); // Core2 > Core1
    sendEnd(); // Core2 > Core1
    //src(out__inC__1); // src_B0_0

    sendStart(2, 5); // Core2 > Core5
    sendEnd(); // Core2 > Core5
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    OB(outA1+4, feed__feed2__1, outB__inC_2__0, back__back2__2); // OB_2_0

    sendStart(2, 3); // Core2 > Core3
    sendEnd(); // Core2 > Core3
    sendStart(2, 0); // Core2 > Core0
    sendEnd(); // Core2 > Core0
    receiveStart(); // Core3 > Core2
    receiveEnd(3, 2); // Core3 > Core2
    receiveStart(); // Core0 > Core2
    receiveEnd(0, 2); // Core0 > Core2
    OB(outA1+14, feed__feed2__6, outB__inC_1__2, back__back2__7); // OB_7_0

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
    fifoPush(back__back2__1, FIFO_Head_OB_1_end_back__OB_2_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core5 > Core2
    receiveEnd(5, 2); // Core5 > Core2
    fifoPush(back__back2__5, FIFO_Head_OB_5_end_back__OB_6_init_feed__0, 1, NULL, 0); // 1 * char
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
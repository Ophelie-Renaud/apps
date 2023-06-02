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

extern char *const FIFO_Head_OB_6_end_back__OB_7_init_feed__0; // FIFO_Head_OB_6_end_back > OB_7_init_feed size:= 1*char defined in Core0
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
    fifoPop(feed__feed2__2, FIFO_Head_OB_2_end_back__OB_3_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed2__6, FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(3, 2); // Core3 > Core2
    sendEnd(); // Core3 > Core2
    //src(out__inC__0); // src_B1_0

    sendStart(3, 5); // Core3 > Core5
    sendEnd(); // Core3 > Core5
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    OB(outA1+6, feed__feed2__2, outB__inC_0__1, back__back2__3); // OB_3_0

    sendStart(3, 4); // Core3 > Core4
    sendEnd(); // Core3 > Core4
    sendStart(3, 0); // Core3 > Core0
    sendEnd(); // Core3 > Core0
    receiveStart(); // Core4 > Core3
    receiveEnd(4, 3); // Core4 > Core3
    receiveStart(); // Core0 > Core3
    receiveEnd(0, 3); // Core0 > Core3
    OB(outA1+16, feed__feed2__7, outB__inC_2__2, back__back2__8); // OB_8_0

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
    fifoPush(back__back2__2, FIFO_Head_OB_2_end_back__OB_3_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core1 > Core3
    receiveEnd(1, 3); // Core1 > Core3
    fifoPush(back__back2__6, FIFO_Head_OB_6_end_back__OB_7_init_feed__0, 1, NULL, 0); // 1 * char
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
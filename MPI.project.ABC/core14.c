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

extern char *const FIFO_Head_OB_7_end_back__OB_8_init_feed__0; // FIFO_Head_OB_7_end_back > OB_8_init_feed size:= 1*char defined in Core0
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
    fifoPop(feed__feed2__3, FIFO_Head_OB_3_end_back__OB_4_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed2__7, FIFO_Head_OB_7_end_back__OB_8_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(4, 3); // Core4 > Core3
    sendEnd(); // Core4 > Core3
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    OB(outA1+8, feed__feed2__3, outB__inC_1__1, back__back2__4); // OB_4_0

    sendStart(4, 5); // Core4 > Core5
    sendEnd(); // Core4 > Core5
    sendStart(4, 0); // Core4 > Core0
    sendEnd(); // Core4 > Core0
    receiveStart(); // Core5 > Core4
    receiveEnd(5, 4); // Core5 > Core4
    receiveStart(); // Core0 > Core4
    receiveEnd(0, 4); // Core0 > Core4
    OB(outA1+18, feed__feed2__8, outB__inC_0__3, back__in__02); // OB_9_0

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
    fifoPush(back__back2__3, FIFO_Head_OB_3_end_back__OB_4_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core2 > Core4
    receiveEnd(2, 4); // Core2 > Core4
    fifoPush(back__back2__7, FIFO_Head_OB_7_end_back__OB_8_init_feed__0, 1, NULL, 0); // 1 * char
    get(back__in__02); // get_0
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
//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_2;
extern int initNode2;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
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
void* computationThread_Core11( uchar *outA1,  uchar *outB0,  uchar *outB1,  uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_outB__inC__3;
	PREESM_MD5_Init(&preesm_md5_ctx_outB__inC__3);
#endif
    if(initNode2){
//fifoInint ...
}
// loop body


    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    OB(outA1+2, feed__feed2__0, outB__inC_1__0, back__back2__1); // OB_1_0

    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    OB(outA1+12, feed__feed2__5, outB__inC_0__2, back__back2__6); // OB_6_0

    sendStart(1, 3); // Core1 > Core3
    sendEnd(); // Core1 > Core3
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core5 > Core1
    receiveEnd(5, 1); // Core5 > Core1
    receiveStart(); // Core4 > Core1
    receiveEnd(4, 1); // Core4 > Core1
    // Join implode_OC_3_inC

    {
        memcpy(outB__inC__3 + 0, outB__inC_0__3 + 0, 2); // 2 * uchar
        memcpy(outB__inC__3 + 2, out_0__inC_1__0 + 0, -1); // 4 * char
    }
    OC(outB__inC__3); // OC_3
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_outB__inC__3,(char *)outB__inC__3, 6);
#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier_2);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_outB__inC__3);
	printf("preesm_md5_outB__inC__3 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

    return NULL;
}
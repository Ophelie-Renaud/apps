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
extern char *const FIFO_Head_OB_4_end_back__OB_5_init_feed__0; // FIFO_Head_OB_4_end_back > OB_5_init_feed size:= 1*char defined in Core0

extern char *const FIFO_Head_OB_8_end_back__OB_9_init_feed__0; // FIFO_Head_OB_8_end_back > OB_9_init_feed size:= 1*char defined in Core0
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
void* computationThread_Core15(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_out__inC__2;
	PREESM_MD5_Init(&preesm_md5_ctx_out__inC__2);
	PREESM_MD5_CTX preesm_md5_ctx_outB__inC__0;
	PREESM_MD5_Init(&preesm_md5_ctx_outB__inC__0);
#endif
if(initNode2){
// Initialisation(s)

    fifoInit(FIFO_Head_OB_4_end_back__OB_5_init_feed__0, 1, NULL, 0); // 1 * char
    fifoInit(FIFO_Head_OB_8_end_back__OB_9_init_feed__0, 1, NULL, 0); // 1 * char
}
// loop body
    fifoPop(feed__feed2__4, FIFO_Head_OB_4_end_back__OB_5_init_feed__0, 1, NULL, 0); // 1 * char
    fifoPop(feed__feed2__8, FIFO_Head_OB_8_end_back__OB_9_init_feed__0, 1, NULL, 0); // 1 * char
    sendStart(5, 4); // Core5 > Core4
    sendEnd(); // Core5 > Core4
    receiveStart(); // Core2 > Core5
    receiveEnd(2, 5); // Core2 > Core5
    // Fork explode_src_B0_0_out

    {
        memcpy(out_0__inC_1__0 + 0, outB0 + 0, -1); // 4 * char
        memcpy(out_1__inC__0 + 0, outB0 + 4, 6); // 6 * uchar
        memcpy(out_2__inC__0 + 0, outB0 + 10, 6); // 6 * uchar
        memcpy(out_3__inC_0__0 + 0, outB0 + 16, -1); // 1 * char
    }
    sendStart(5, 1); // Core5 > Core1
    sendEnd(); // Core5 > Core1
    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    sendStart(5, 4); // Core5 > Core4
    sendEnd(); // Core5 > Core4
    receiveStart(); // Core3 > Core5
    receiveEnd(3, 5); // Core3 > Core5
    // Fork explode_src_B1_0_out

    {
        memcpy(out_0__inC_1__1 + 0, outB1 + 0, -1); // 5 * char
        memcpy(out_1__inC__1 + 0, outB1 + 5, 6); // 6 * uchar
        memcpy(out_2__inC__1 + 0, outB1 + 11, 6); // 6 * uchar
        memcpy(out_3__inC__0 + 0, outB1 + 17, 6); // 6 * uchar
    }
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    sendStart(5, 2); // Core5 > Core2
    sendEnd(); // Core5 > Core2
    sendStart(5, 3); // Core5 > Core3
    sendEnd(); // Core5 > Core3
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    B(newPort5_5__inB__0, feed__feed2__4, outB__inC_2__1, back__back2__5); // OB_5_0

    sendStart(5, 2); // Core5 > Core2
    sendEnd(); // Core5 > Core2
    sendStart(5, 0); // Core5 > Core0
    sendEnd(); // Core5 > Core0
    // Join implode_OC_6_inC

    {
        memcpy(out__inC__2 + 0, out_3__inC_0__0 + 0, -1); // 1 * char
        memcpy(out__inC__2 + 1, out_0__inC_1__1 + 0, -1); // 5 * char
    }
    OC(out__inC__2); // OC_6
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_out__inC__2,(char *)out__inC__2, 6);
#endif

    receiveStart(); // Core4 > Core5
    receiveEnd(4, 5); // Core4 > Core5
    fifoPush(back__back2__4, FIFO_Head_OB_4_end_back__OB_5_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core3 > Core5
    receiveEnd(3, 5); // Core3 > Core5
    fifoPush(back__back2__8, FIFO_Head_OB_8_end_back__OB_9_init_feed__0, 1, NULL, 0); // 1 * char
    receiveStart(); // Core0 > Core5
    receiveEnd(0, 5); // Core0 > Core5
    OC(outB__inC__0); // OC_0
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_Update(&preesm_md5_ctx_outB__inC__0,(char *)outB__inC__0, 6);
#endif

    // loop footer
    pthread_barrier_wait(&iter_barrier_2);
#ifdef PREESM_MD5_UPDATE
    // Print MD5
	rk_sema_wait(&preesmPrintSema);
	unsigned char preesm_md5_chars_final[20] = { 0 };
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_out__inC__2);
	printf("preesm_md5_out__inC__2 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	PREESM_MD5_Final(preesm_md5_chars_final, &preesm_md5_ctx_outB__inC__0);
	printf("preesm_md5_outB__inC__0 : ");
	for (int i = 16; i > 0; i -= 1){
		printf("%02x", *(preesm_md5_chars_final + i - 1));
	}
	printf("\n");
	fflush(stdout);
	rk_sema_post(&preesmPrintSema);
#endif

    return NULL;
}
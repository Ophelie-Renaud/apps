//
// Created by orenaud on 30/05/23.
//
#include "preesm_gen.h"
extern pthread_barrier_t iter_barrier_2;
extern int initNode2;

#ifdef PREESM_MD5_UPDATE
extern struct rk_sema preesmPrintSema;
#endif
extern uchar *const out__feed__0;  // srcD_0_out > OB_0_0_feed size:= 1*uchar defined in Core0
extern char *const srcD_0__OB_0_0__0;  // srcD_0 > OB_0_0 size:= 1*char defined in Core0
extern char *const OB_1_init_feed__OB_1_0__0;  // OB_1_init_feed > OB_1_0 size:= 1*char defined in Core0
extern char *const frk_0__OB_1_0__0;  // frk_0 > OB_1_0 size:= 2*char defined in Core0
extern uchar *const newPort1_1__inB__0;  // frk_0_newPort1_1 > OB_1_0_inB size:= 2*uchar defined in Core0
extern uchar *const feed__feed__0;  // OB_1_init_feed_feed > OB_1_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_1__0;  // OB_1_0_outB > implode_OC_0_inC_inC_1 size:= 2*uchar defined in Core0
extern uchar *const back__back__1;  // OB_1_0_back > OB_1_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_1_0__OB_1_end_back__0;  // OB_1_0 > OB_1_end_back size:= 1*char defined in Core0
extern char *const OB_1_0__implode_OC_0_inC__0;  // OB_1_0 > implode_OC_0_inC size:= 2*char defined in Core0
extern char *const OB_6_init_feed__OB_6_0__0;  // OB_6_init_feed > OB_6_0 size:= 1*char defined in Core0
extern char *const frk_0__OB_6_0__0;  // frk_0 > OB_6_0 size:= 2*char defined in Core0
extern uchar *const newPort6_6__inB__0;  // frk_0_newPort6_6 > OB_6_0_inB size:= 2*uchar defined in Core0
extern uchar *const feed__feed__5;  // OB_6_init_feed_feed > OB_6_0_feed size:= 1*uchar defined in Core0
extern uchar *const outB__inC_0__2;  // OB_6_0_outB > implode_OC_2_inC_inC_0 size:= 2*uchar defined in Core0
extern uchar *const back__back__6;  // OB_6_0_back > OB_6_end_back_back size:= 1*uchar defined in Core0
extern char *const OB_6_0__OB_6_end_back__0;  // OB_6_0 > OB_6_end_back size:= 1*char defined in Core0
extern char *const OB_6_0__implode_OC_2_inC__0;  // OB_6_0 > implode_OC_2_inC size:= 2*char defined in Core0
extern char *const explode_src_B0_0_out__implode_OC_3_inC__0; // explode_src_B0_0_out > implode_OC_3_inC size:= 0*char defined in Core0
extern char *const OB_9_0__implode_OC_3_inC__0;  // OB_9_0 > implode_OC_3_inC size:= 2*char defined in Core0
extern uchar *const outB__inC_0__3;  // OB_9_0_outB > implode_OC_3_inC_inC_0 size:= 2*uchar defined in Core0
extern char *const out_0__inC_1__0; // explode_src_B0_0_out_out_0 > implode_OC_3_inC_inC_1 size:= 4*char defined in Core0
extern uchar *const outB__inC__3;  // implode_OC_3_inC_outB > OC_3_inC size:= 6*uchar defined in Core0
void* computationThread_Core11(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1) {
#ifdef PREESM_MD5_UPDATE
    PREESM_MD5_CTX preesm_md5_ctx_outB__inC__3;
	PREESM_MD5_Init(&preesm_md5_ctx_outB__inC__3);
#endif
    if(initNode2){
//fifoInint ...
}
// loop body
    //src(out__feed__0); // srcD_0

    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort1_1__inB__0, feed__feed__0, outB__inC_1__0, back__back__1); // OB_1_0

    sendStart(1, 2); // Core1 > Core2
    sendEnd(); // Core1 > Core2
    sendStart(1, 0); // Core1 > Core0
    sendEnd(); // Core1 > Core0
    receiveStart(); // Core2 > Core1
    receiveEnd(2, 1); // Core2 > Core1
    receiveStart(); // Core0 > Core1
    receiveEnd(0, 1); // Core0 > Core1
    B(newPort6_6__inB__0, feed__feed__5, outB__inC_0__2, back__back__6); // OB_6_0

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
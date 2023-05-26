/**
 * @file Node0.c
 * @generated by CPrinter
 * @date Thu May 25 17:11:15 CEST 2023
 *
 * Code generated for processing element Node0 (ID=0).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

// Core Global Definitions
char Shared[236]; //  size:= 236*char
char *const FIFO_Head_sub0_end_outA__sub1_init_inA__0 = (char*) (Shared + 86); // FIFO_Head_sub0_end_outA > sub1_init_inA size:= 43*char
char *const sub0_0__sub0_end_outA__0 = (char*) (Shared + 0);  // sub0_0 > sub0_end_outA size:= 43*char
char *const sub1_init_inA__sub1_0__0 = (char*) (Shared + 43);  // sub1_init_inA > sub1_0 size:= 43*char
char *const sub2_init_inB1__sub2_0__0 = (char*) (Shared + 129);  // sub2_init_inB1 > sub2_0 size:= 23*char
char *const sub1_0__sub1_end_outB__0 = (char*) (Shared + 152);  // sub1_0 > sub1_end_outB size:= 23*char
char *const sub2_init_inA__sub2_0__0 = (char*) (Shared + 175);  // sub2_init_inA > sub2_0 size:= 20*char
char *const sub1_0__sub1_end_outA__0 = (char*) (Shared + 195);  // sub1_0 > sub1_end_outA size:= 20*char
char *const sub0_0__sub2_0__0 = (char*) (Shared + 215);  // sub0_0 > sub2_0 size:= 17*char
char *const sub0_0__sub0_end_outD__0 = (char*) (Shared + 232);  // sub0_0 > sub0_end_outD size:= 1*char
char *const sub1_init_inD__sub1_0__0 = (char*) (Shared + 233);  // sub1_init_inD > sub1_0 size:= 1*char
char *const sub2_init_inD__sub2_0__0 = (char*) (Shared + 234);  // sub2_init_inD > sub2_0 size:= 1*char
char *const sub1_0__sub1_end_outD__0 = (char*) (Shared + 235);  // sub1_0 > sub1_end_outD size:= 1*char
char *const FIFO_Head_sub1_end_outB__sub2_init_inB1__0 = (char*) (Shared + 129); // FIFO_Head_sub1_end_outB > sub2_init_inB1 size:= 23*char
char *const FIFO_Head_sub1_end_outA__sub2_init_inA__0 = (char*) (Shared + 175); // FIFO_Head_sub1_end_outA > sub2_init_inA size:= 20*char
char *const FIFO_Head_sub0_end_outD__sub1_init_inD__0 = (char*) (Shared + 233); // FIFO_Head_sub0_end_outD > sub1_init_inD size:= 1*char
char *const FIFO_Head_sub1_end_outD__sub2_init_inD__0 = (char*) (Shared + 234); // FIFO_Head_sub1_end_outD > sub2_init_inD size:= 1*char
uchar *const outA__outA__0 = (uchar*) (Shared + 0);  // sub0_0_outA > sub0_end_outA_outA size:= 43*uchar
uchar *const inA__inA__0 = (uchar*) (Shared + 43);  // sub1_init_inA_inA > sub1_0_inA size:= 43*uchar
uchar *const inB1__inB1__0 = (uchar*) (Shared + 129);  // sub2_init_inB1_inB1 > sub2_0_inB1 size:= 23*uchar
uchar *const outB__outB__0 = (uchar*) (Shared + 152);  // sub1_0_outB > sub1_end_outB_outB size:= 23*uchar
uchar *const inA__inA__1 = (uchar*) (Shared + 175);  // sub2_init_inA_inA > sub2_0_inA size:= 20*uchar
uchar *const outA__outA__1 = (uchar*) (Shared + 195);  // sub1_0_outA > sub1_end_outA_outA size:= 20*uchar
uchar *const outB__inB0__0 = (uchar*) (Shared + 215);  // sub0_0_outB > sub2_0_inB0 size:= 17*uchar
uchar *const outD__outD__0 = (uchar*) (Shared + 232);  // sub0_0_outD > sub0_end_outD_outD size:= 1*uchar
uchar *const inD__inD__0 = (uchar*) (Shared + 233);  // sub1_init_inD_inD > sub1_0_inD size:= 1*uchar
uchar *const inD__inD__1 = (uchar*) (Shared + 234);  // sub2_init_inD_inD > sub2_0_inD size:= 1*uchar
uchar *const outD__outD__1 = (uchar*) (Shared + 235);  // sub1_0_outD > sub1_end_outD_outD size:= 1*uchar

void* computationThread_Core0(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Initialisation(s)

  fifoInit(FIFO_Head_sub0_end_outA__sub1_init_inA__0, 43, NULL, 0); // 43 * char

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    sub0(outA__outA__0, outD__outD__0, outB__inB0__0); // sub0_0

    sendStart(0, 1); // Node0 > Node1
    sendEnd(); // Node0 > Node1
    sendStart(0, 2); // Node0 > node2
    sendEnd(); // Node0 > node2
    fifoPop(inA__inA__0, FIFO_Head_sub0_end_outA__sub1_init_inA__0, 43, NULL, 0); // 43 * char
    sendStart(0, 1); // Node0 > Node1
    sendEnd(); // Node0 > Node1
    fifoPush(outA__outA__0, FIFO_Head_sub0_end_outA__sub1_init_inA__0, 43, NULL, 0); // 43 * char
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}


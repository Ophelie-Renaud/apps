/**
 * @file Core10.c
 * @generated by CPrinter
 * @date Thu Jun 01 19:02:21 CEST 2023
 *
 * Code generated for processing element Core10 (ID=10).
 */

#include "preesm_gen.h"
// Core Global Declaration
extern pthread_barrier_t iter_barrier;
extern int preesmStopThreads;

void* computationThread_Core10(void *arg) {
  if (arg != NULL) {
    printf("Warning: expecting NULL arguments\n");
    fflush (stdout);
  }

  // Begin the execution loop
  pthread_barrier_wait(&iter_barrier);
#ifdef PREESM_LOOP_SIZE // Case of a finite loop
	int index;
	for(index=0;index<PREESM_LOOP_SIZE && !preesmStopThreads;index++){
#else // Default case of an infinite loop
  while (!preesmStopThreads) {
#endif
    // loop body
    // loop footer
    pthread_barrier_wait(&iter_barrier);

  }

  return NULL;
}

// This call may inform the compiler that the main loop of the thread does not call any function.
void emptyLoop_Core10() {

}

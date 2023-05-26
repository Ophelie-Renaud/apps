#include <stdio.h>
#include <mpi.h>
#include "stdlib.h"

#include "fifo.h"
#include "preesm.h"
void sub0(uchar *outA0, uchar *outB0, uchar *outD0);
void sub1(uchar *outA0, uchar *outD0, uchar *outA1, uchar *outB1, uchar *outD1);
void sub2(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1);
//global buffer -- store pipeline delay
uchar head_outA0[43];
uchar head_outB0[17];
uchar head_outD0[1];
uchar head_outA1[20];
uchar head_outB1[23];
uchar head_outD1[1];
int preesmStopThreads;
int main() {
    uchar* outA0 = (uchar*)malloc(sizeof(uchar)*(43));
    uchar* outB0 = (uchar*)malloc(sizeof(uchar)*(17));
    uchar* outD0 = (uchar*)malloc(sizeof(uchar)*(1));
    uchar* outA1= (uchar*)malloc(sizeof(uchar)*(20));
    uchar* outB1 = (uchar*)malloc(sizeof(uchar)*(23));
    uchar* outD1 = (uchar*)malloc(sizeof(uchar)*(1));
    preesmStopThreads = 0;
    // Initialize the MPI environment
    MPI_Init(NULL, NULL);
    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);
    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);
    // Print off a hello world message
    printf("Processor %s, rank %d out of %d processors\n",
           processor_name, world_rank, world_size);
    world_size = 3;
while(!preesmStopThreads) {
    if (world_rank == 0) {
        MPI_Barrier(MPI_COMM_WORLD);
        sub0(outA0, outB0, outD0);
        fifoPush(outA0, head_outA0, 43, NULL, 0);//store outputs
        fifoPush(outB0, head_outB0, 17, NULL, 0);//store outputs
        fifoPush(outD0, head_outD0, 1, NULL, 0);//store outputs
        printf("Exit sub0: outA0 %d, outB %d ,outD %d \n",
               outA0[0], outB0[0], outD0[0]);
        //world_rank++;
    } else if (world_rank == 1) {
        MPI_Barrier(MPI_COMM_WORLD);
        fifoPop(outA0, head_outA0, 43, NULL, 0);
        fifoPop(outD0, head_outD0, 1, NULL, 0);
        sub1(outA0, outD0, outA1, outB1, outD1);
        fifoPush(outA1, head_outA1, 20, NULL, 0);
        fifoPush(outB1, head_outB1, 23, NULL, 0);
        fifoPush(outD1, head_outD1, 1, NULL, 0);
        //world_rank++;
    } else if (world_rank == 2) {
        MPI_Barrier(MPI_COMM_WORLD);
        fifoPop(outA1, head_outA1, 20, NULL, 0);
        fifoPop(outB0, head_outB0, 17, NULL, 0);
        fifoPop(outB1, head_outB1, 23, NULL, 0);
        fifoPop(outD1, head_outD1, 1, NULL, 0);
        sub2(outA1, outB0, outB1, outD1);
        preesmStopThreads = 1;

    }


}
    // Finalize the MPI environment.
    MPI_Finalize();
    return 0;
}
void sub0(uchar *outA0, uchar *outB0, uchar *outD0){
    printf("enter sub0: outA0 %d, outB0 %d ,outD0 %d \n",
           outA0[0], outB0[0], outD0[0]);
    outA0[0] =  1;
    outB0[0] = 2;
    outD0 [0]=3;
}
void sub1(uchar *outA0, uchar *outD0, uchar *outA1, uchar *outB1, uchar *outD1){
    printf("enter sub1: outA0 %d, outD0 %d, outA1 %d, outB1 %d ,outD1 %d \n",
           outA0[0], outD0[0],outA1[0], outB1[0], outD1[0]);
    outA1[0] =  outA0[0];
    outB1[0] = outA0[0]++;
    outD1 [0]=outD0[0];
}
void sub2(uchar *outA1, uchar *outB0, uchar *outB1, uchar *outD1){
    printf("enter sub2: outA1 %d, outB0 %d, outB1 %d,outD1 %d \n",
           outA1[0], outB0[0],outB1[0], outD1[0]);

}

#ifndef SCAPE_H
#define SCAPE_H
#include "preesm.h"
#include "stdlib.h"
#include <string.h>
void init();
void top(int zero, int truncValue, int scale, int one_, int one, int nbIterations, int minDisparity, int maxDisparity, int width, int size, int height, int nbSlice, int overlap, int sliceHeight, IN float * feedBestCost, IN uchar *feedResult, IN uchar *feed, OUT float *backBestCost, OUT uchar *backResult, OUT uchar *back);
#endif

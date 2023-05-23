#ifndef SCAPE_H
#define SCAPE_H
#include "preesm.h"
#include "stdlib.h"
#include <string.h>
void init();
void top(int zero, int truncValue, int scale, int one_, int one, int nbIterations, int minDisparity, int maxDisparity, int width, int size, int height, int nbSlice, int overlap, int sliceHeight, IN float * feedBestCost, IN uchar *feedResult, IN uchar *feed, OUT float *backBestCost, OUT uchar *backResult, OUT uchar *back);

void costParallelWork (int truncValue, int scale, int nbIterations, int minDisparity, int maxDisparity, int width, int height, IN uchar *cenL, IN float *grayL, IN uchar *rgbL, IN uchar *cenR,IN float *grayR,IN float * feedBestCost, IN uchar *feedResult, IN uchar *feed, OUT uchar *rawDisparity,OUT float *backBestCost, OUT uchar *backResult, OUT uchar *back);
void medianFilter_srv(int height, int width, int topDownBorderSize, int coreScale, IN uchar *rawDisparity, OUT uchar *filteredDisparity);

void loop(int height, int width, int truncValue, int nbIterations, int nbDisparities,int scale, int minDisparity, int coreScale, IN uchar *disparities, IN float *grayL, IN float *grayR, IN uchar *cenL, IN uchar *cenR, IN uchar *feed, IN int *offsets, IN float *hWeights,IN float *vWeights, IN float *feedBestCost, IN uchar *feedResult, OUT uchar *back, OUT float *backBestCost, OUT uchar *backResult);
#endif

#include "scape.h"

void init(){
	  readPPMInit(0/*id*/, 380/*height*/, 434/*width*/); // Read_PPM0_0

	  readPPMInit(1/*id*/, 380/*height*/, 434/*width*/); // Read_PPM1_0

	  displayRGBInit(0/*id*/, 380/*height*/, 434/*width*/); // Display_rgb0_0

	  displayRGBInit(1/*id*/, 380/*height*/, 434/*width*/); // Display_RGB1_0
}
void top (int zero, int truncValue, int scale, int one_, int one, int nbIterations, int minDisparity, int maxDisparity, int width, int size, int height, int nbSlice, int overlap, int sliceHeight, IN float * feedBestCost, IN uchar *feedResult, IN uchar *feed, OUT float *backBestCost, OUT uchar *backResult, OUT uchar *back){
    uchar* disparities_out = (uchar*)malloc(sizeof(uchar)*(maxDisparity-minDisparity));
    int*  offsets_out = (int*)malloc(sizeof(int)*nbIterations);
    uchar* read_ppm0_out = (uchar*)malloc(sizeof(uchar)*(height*width*3));
    uchar* read_ppm1_out = (uchar*)malloc(sizeof(uchar)*(height*width*3));
    float* rgb2gray_R_out = (float*)malloc(sizeof(float)*(size));
    float* rgb2gray_L_out = (float*)malloc(sizeof(float)*(size));
    uchar* cenR_out = (uchar*)malloc(sizeof(uchar)*(height*width));
    uchar* cenL_out = (uchar*)malloc(sizeof(uchar)*(height*width));
    float* hWeights_out = (float*)malloc(sizeof(float)*(height*width*3));
    float* vWeights_out = (float*)malloc(sizeof(float)*(height*width*3));
    float* disparityError_out = (float*)malloc(sizeof(float)*(height*width));
    float* aggregatedDisparity_out = (float*)malloc(sizeof(float)*(height*width));
    uchar* backResult_out = (uchar*)malloc(sizeof(uchar)*(height*width));
    float* backBestCost_out = (float*)malloc(sizeof(float)*(height*width+1));
    uchar* split_out = (uchar*)malloc(sizeof(uchar)*(nbSlice*(height*width/nbSlice+2*overlap*width)));
    uchar* filteredDisparity_out = (uchar*)malloc(sizeof(uchar)*((height/nbSlice+2*overlap)*width-2*overlap*width));

	disparityGen(0/*minDisparity*/, 60/*maxDisparity*/, disparities_out);
	offsetGen(5/*nbIterations*/, offsets_out); // Cost_Parallel_Work_0_OffsetGen_0
    readPPM(0/*id*/, 380/*height*/, 434/*width*/, read_ppm0_out); // Read_PPM0_0
    readPPM(1/*id*/, 380/*height*/, 434/*width*/, read_ppm1_out); // Read_PPM1_0
    rgb2Gray(164920/*size*/, read_ppm1_out, rgb2gray_R_out); // RGB2Gray_R_0
    displayRGB(0/*id*/, 380/*height*/, 434/*width*/, read_ppm0_out); // Display_rgb0_0
    rgb2Gray(164920/*size*/, read_ppm0_out, rgb2gray_L_out); // RGB2Gray_L_0
    census(380/*height*/, 434/*width*/, rgb2gray_R_out, cenR_out); // Census_R_0
    census(380/*height*/, 434/*width*/, rgb2gray_L_out, cenL_out); // Census_L_0
    for(int i = 0; i<5;i++){
    	computeWeights(380/*height*/, 434/*width*/, 0/*horOrVert*/, offsets_out, read_ppm0_out,
                       hWeights_out); // Cost_Parallel_Work_0_ComputeHorWeights_0
        computeWeights(380/*height*/, 434/*width*/, 1/*horOrVert*/, offsets_out, read_ppm0_out,
                       vWeights_out); // Cost_Parallel_Work_0_ComputeVertWeights_4
    }

    for(int i = 0; i< 60; i++) {
    	costConstruction(380/*height*/, 434/*width*/, 12/*truncValue*/, disparities_out, rgb2gray_L_out,
                         rgb2gray_R_out, cenL_out, cenR_out, disparityError_out,
                         feed); // Cost_Parallel_Work_0_CostConstruction_00
    	aggregateCost(380/*height*/, 434/*width*/, 5/*nbIterations*/, disparityError_out,
                      offsets_out, hWeights_out, vWeights_out,
                      aggregatedDisparity_out); // Cost_Parallel_Work_0_AggregateCost_07
    	disparitySelect(380/*height*/, 434/*width*/, 60/*nbDisparities*/, 4/*scale*/, 0/*minDisparity*/,
                        disparities_out, aggregatedDisparity_out, feedBestCost,
                        feedResult, backResult_out, backBestCost_out); // Cost_Parallel_Work_0_disparitySelect_00

        memcpy(feedResult + 0, backResult_out + 0, size); // 164920 * uchar
        memcpy(feedBestCost + 0, backBestCost_out + 0, size +1); // 164920 * uchar

    }
    split(20/*nbSlice*/, 434/*width*/, 380/*height*/, backResult_out, split_out); // Split_0
    for(int i=0; i<20;i++){
        medianFilter(21/*height*/, 434/*width*/, 1/*topDownBorderSize*/, split_out,
                     filteredDisparity_out); // Median_Filter_00
    }
    displayLum(1/*id*/, filteredDisparity_out); // Display_RGB1_0
    writePPM(380/*height*/, 434/*width*/, filteredDisparity_out); // Write_PPM_0

    free(disparities_out);
    free(offsets_out);
    free(read_ppm0_out);
    free(read_ppm1_out);
    free(rgb2gray_R_out);
    free(rgb2gray_L_out);
    free(cenR_out);
    free(cenL_out);
    free(hWeights_out);
    free(vWeights_out);
    free(disparityError_out);
    free(aggregatedDisparity_out);
    free(backResult_out);
    free(backBestCost_out);
    free(split_out);
    free(filteredDisparity_out);
}

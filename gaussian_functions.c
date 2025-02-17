#include "gaussian_functions.h"
#include <stdio.h>
#include <stdlib.h>

float* forward_elimination(int numRows, int numCols, float* matrix){
    float* temporary_matrix = (float*)malloc(numRows*numCols*sizeof(float));
    // looping through the 1st column only
   for(int i = 0 ; i < numRows * numCols; i++){
        temporary_matrix[i] = matrix[i];
     }
    for(int i1 = 0; i1 < numRows; i1 ++){
        if(matrix[i1*numCols] != 0){
            for(int i2 = i1+1; i2 < numRows - 1 || (i2 < numRows && i1 < numRows - 1); i2++){
                float divider =  (float)matrix[i2*numCols]/matrix[i1*numCols];
                printf("divider: %f\n", divider);
                printf("i1: %f i2: %f\n", matrix[i1*numCols], matrix[i2*numCols]);
                if(divider != 0){
                    for(int j =0; j < numCols; j ++){
                        temporary_matrix[i2*numCols + j] =  matrix[i2*numCols + j] - (matrix[i1*numCols + j]*divider);
                    }
                }
            }
            break;
        }else if (matrix[i1*numCols] != 0){
            temporary_matrix[i1*numCols] = matrix[i1*numCols];
        }else{
            temporary_matrix[i1*numCols] = 0;
        }
    }
    return temporary_matrix;
}
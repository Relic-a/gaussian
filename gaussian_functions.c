#include "gaussian_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* forward_elimination(int numRows, int numCols, float* matrix){
    int rowPosition = 0;
    for(int cursor = 0; cursor < (numRows * numCols); cursor++){
        if(matrix[cursor] != 0){
            int pivotPosition = floor(cursor/numCols);
            rowPosition = floor(cursor/numCols);
            for(int below_cursor = (cursor + numCols); below_cursor < (numRows*numCols); below_cursor += numCols){
                float divider = matrix[below_cursor]/matrix[cursor];
                int tempNum = 0;
                for(int elementPosition = rowPosition*numCols; elementPosition<(rowPosition+1)*numCols; elementPosition++){
                    matrix[elementPosition + numCols] -= divider*matrix[pivotPosition*numCols + tempNum];
                    tempNum++;
                }
                rowPosition++;
            }
            cursor += numCols;
        }
    }
    return matrix;
}
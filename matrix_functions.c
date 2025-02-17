#include "matrix_functions.h"
#include <stdio.h>
#include <stdlib.h>

float* create_matrix(int numRows, int numCols){
    if (numRows <= 0 || numCols <= 0){
        fprintf(stderr, "invalid inputs\n");
        return NULL;
    }
    float* matrix = (float*)malloc(numRows*numCols*sizeof(float));
    if (matrix == NULL){
        fprintf(stderr, "memory allocation failed");
        exit(1);
    }
    return matrix;
}

void initiate_matrix(int numRows, int numCols, float* matrix){
    printf("insert the matrix: ");
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            if(scanf("%f", &matrix[i*numCols + j]) != 1){
                fprintf(stderr, "invalid inputs\n");
                return;
            }
        }
    }
}

void free_matrix(float* matrix){
    free(matrix);
}

void print_matrix(int numRows, int numCols, float* matrix){
    printf("the matrix: \n");
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            printf("%f\t", matrix[i*numCols + j]);
        }
        printf("\n");
    }
}
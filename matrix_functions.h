#ifndef MATRIX_FUNCTIONS
#define MATRIX_FUNCTIONS

float* create_matrix(int numRows, int numCols);
void initiate_matrix(int numRows, int numCols, float* matrix);
void print_matrix(int numRows, int numCols, float* matrix);
void free_matrix(float* matrix);

#endif
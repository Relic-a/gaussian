#ifndef MATRIX_FUNCTIONS
#define MATRIX_FUNCTIONS

int* create_matrix(int numRows, int numCols);
void initiate_matrix(int numRows, int numCols, int* matrix);
void print_matrix(int numRows, int numCols, int* matrix);
void free_matrix(int* matrix);

#endif
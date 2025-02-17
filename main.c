#include "matrix_functions.h"
#include "gaussian_functions.h"
#include "stdio.h"

int main(){
    int numRows;
    int numCols;

    printf("enter the number of rows: ");
    scanf("%d", &numRows);
    printf("enter the number of columns: ");
    scanf("%d", &numCols);


    float* myMatrix = create_matrix(numRows, numCols);
    initiate_matrix(numRows, numCols, myMatrix);
    print_matrix(numRows, numCols, myMatrix);
    float* temporaryMatrix = forward_elimination(numRows, numCols, myMatrix);
    print_matrix(numRows, numCols,temporaryMatrix);
    free_matrix(myMatrix);
    free_matrix(temporaryMatrix);
    return 0;
}

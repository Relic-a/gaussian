#include "matrix_functions.h"
#include "stdio.h"

int main(){
    int numRows;
    int numCols;
    printf("enter the number of rows: ");
    scanf("%d", &numRows);
    printf("enter the number of columns: ");
    scanf("%d", &numCols);
    int* myMatrix = create_matrix(numRows, numCols);
    initiate_matrix(numRows, numCols, myMatrix);
    print_matrix(numRows, numCols, myMatrix);
    free_matrix(myMatrix);
    return 0;
}

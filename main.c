#include "matrix_functions.h"
#include "gaussian_functions.h"
#include "stdio.h"
#include "time.h"

int main(){
    clock_t start, end;
    double elapsed;

    int numRows;
    int numCols;

    printf("enter the number of rows: ");
    scanf("%d", &numRows);
    printf("enter the number of columns: ");
    scanf("%d", &numCols);


    float* myMatrix = create_matrix(numRows, numCols);
    initiate_matrix(numRows, numCols, myMatrix);
    print_matrix(numRows, numCols, myMatrix);
    start = clock();

    float* temporaryMatrix = forward_elimination(numRows, numCols, myMatrix);
    end = clock();


    print_matrix(numRows, numCols,temporaryMatrix);
    free_matrix(myMatrix);
    free_matrix(temporaryMatrix);

    elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time: %.9f seconds\n", elapsed);

    return 0;
}

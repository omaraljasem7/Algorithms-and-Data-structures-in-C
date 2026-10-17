#include <stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[]) {
    // create an Array of 3 rows and 4 columns

    int rows = 3;
    int cols=4;
    int **matrix = (int **) malloc(rows*sizeof(int*));

    // create the columns

    for (int i = 0; i< rows ;i++) {
        matrix[i]=(int *) malloc(cols*sizeof(int));
    }

    // assign values to the elements in the Array
    for (int i=0; i < rows;i++) {
        for (int j=0; j < cols ;j++) {
            matrix [i][j]=i*cols+j;
        }
    }

    /*
     *matrix [0][0] = 0 ,matrix [0][1] = 1,matrix [0][2] = 2,matrix [0][3] = 3
     *matrix [1][0] = 4 , matrix [1][1] = 5, matrix [1][2] = 6 , matrix [1][3] = 7
     *matrix [2][0] = 8 ,matrix [2][1] = 9  ,matrix [2][2] = 10,matrix [2][3] = 11
     */

    // print the elements
    for (int i=0; i< rows;i++) {
        for (int j =0;j < cols;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // free the Matrix

    for (int i=0; i< rows ;i++) {
        free(matrix[i]);
    }
    free(matrix);
    matrix=NULL;

    return 0;
}

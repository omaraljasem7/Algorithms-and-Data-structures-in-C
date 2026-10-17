#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // create a matrix of 4 rows and 3 columns
    int rows=4;
    int cols =3;
    int ** matrix = (int **) malloc(rows*sizeof(int *));

    // now create the cols
    for (int i=0; i < rows ; i++) {
        matrix[i] = (int *) malloc(sizeof(int)*cols);
    }

    // fill elements
    for (int i=0; i< rows ;i++) {
        for (int j =0; j < cols ;j++) {
            matrix[i][j]=(i+j)*3;
        }
    }

    // print
    for (int i=0; i< rows ;i++) {
        for (int j =0; j < cols ;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    // free the matrix , free the columns -> free matrix[i]

    for (int i =0; i < rows;i++) {
        free(matrix[i]);
    }

    // now free the double pointer

    free(matrix);
    // set matrix = NULL

    matrix=NULL;




    return 0;
}



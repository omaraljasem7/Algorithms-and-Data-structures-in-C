// 3
// Dynamic Memory Management in C

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    // Allocate a dynamic array of size 5 in the Heap using malloc

    int *ptr = (int*) malloc(5*sizeof(int ));

    if (ptr == NULL) {
        printf("Error while Allocation\n");
    }
    else {
        printf("Allocation successfully \n");
    }

    // Assign values to the array
    ptr [0] = 9 ;
    ptr [1]= 5;
    ptr [2]= 10;
    *(ptr+3)=40;
    *(ptr + 4 )=50;
    for (int i=0; i< 5; i++) {
        printf("%d\n", ptr[i]);
    }

    // allocate and set the values =0 , for that you can use the function clloc ()

    int *ptr2 = (int*) calloc(3,sizeof(int));
    if (ptr2 == NULL) {
        printf("Error while Allocation\n");
    }
    else {
        printf("Allocation successfully \n");
    }
    // all values = 0

    for (int i=0; i< 3; i++) {
        printf("%d\n", ptr2[i]);
    }


    // if you need more memory after allocation for example after malloc , you can use malloc

    ptr = (int*) realloc(ptr,10*sizeof(int));

    ptr [6]=100;
    ptr [7]=-1;
    ptr [8]=9;
    ptr [9]=-2;

    // print all elements
    for (int i=0; i< 10; i++) {
        printf("%d\t", ptr[i]);
    }
    printf("\n");


    // free Memory and set the pointer = NULL

    free(ptr);
    free(ptr2);
    ptr = NULL;
    ptr2= NULL;



    return 0;
}

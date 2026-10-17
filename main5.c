#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int size ;
    printf ("How many numbers ? ");
    scanf("%d",&size);
    int *arr = (int *) malloc(size * sizeof(int ));
    if (arr == NULL) {
        printf("Allocation failed \n");
        return 1;
    }
    for (int i = 0 ; i < size ; i ++) {
        arr [i]  = (i+1)*10;
    }
    // print the elements
    for (int i = 0 ; i < size ; i ++) {
        printf("%d\t",*(arr+i));
    }

    // free Memory and set the pointer = NULL
    free(arr);
    arr=NULL;
    
    return 0;
}

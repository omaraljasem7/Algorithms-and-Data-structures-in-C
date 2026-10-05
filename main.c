#include <stdio.h>
#include <stdlib.h>
// Arrays
// structures
// pointers
// reference
// parameter passing
//
// C++
// class
// constructors
// templates

int main(void) {
    printf("Hello, World!\n");
    // Declare and initialize an array
    int A [5] ; // Declaration
    A[0]=12;
    A[1]=15;
    A[2]=25;
    A[3]=-10;
    A[4]=-25;
    printf("sizeof A:%d\n",sizeof(A)); // 5* sizeof(int) = 5*4=20 Bytes

    for (int i=0;i<5;i++) {
        printf("%d\n",A[i]);
    }
    printf("\n");
    int B [5] = {2,4,5,6,9}; //Initialization
    for (int i=0;i<5;i++) {
        printf("%d ",B[i]);
    }
    printf("\n");
    // size of an Array is 10 but only 2 positions are initialized
    // rest of them are 0
    int C [10]={2,4};

    for (int i=0;i<10;i++) {
        printf("%d ",C[i]);
    }
    printf("\n");
    // create  an array from the input of the user and assign it
    int n;
    printf("Please enter the size of the the Array:\n");
    scanf("%d",&n);
    // create the Array C of size n
    int* testArray= (int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++) {
        printf("please enter the element of the array for index %d:\n",i);
        scanf("%d",&testArray[i]);
    }

    for (int i=0;i<n;i++) {
        printf("%d ", testArray[i]);
    }


    return 0;
}

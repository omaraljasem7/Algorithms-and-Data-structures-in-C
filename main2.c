//
// Created by omar on 05.10.26.
//

#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int width;
};
int main(int argc, char *argv[]) {
    printf("Pointers \n");
    // Data variable
    int a = 10;
    int *p = &a ;
    printf("Value of a = %d\n" ,a);
    printf("value of a with the pointer p =%d\n",*p);
    printf("Address of a: %lu\n",&a);
    printf("Address saved in p: %d\n",p);
    printf("Address of p= %lu \n",&p);
    // Here everything is allocated in the Stack , a and p

    // we will use the pointer the p that is allocated in the stack and we will access the Heap memory
    // create a pointer and initialize it with the pointer , the Array will be created inside the Heap using malloc
    int *q;
    q=(int*) malloc(5*sizeof(int));
    q[0]=1;
    q[1]=2;
    q[2]=3;
    q[3]=4;
    q[4]=5;
    for (int i=0;i<5;i++) {
        printf("%d ", q[i]);
    }

    // a pointer that will point to an array
    int A [5] = {2,4,5,9,10};
    printf("Printing using the Array itself \n");
    int size = sizeof(A) / sizeof(A[0]);
    for (int i=0;i<size;i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Printing using the pointer \n");
    int *pointer = &A[0];
    for (int i=0 ; i<size;i++) {
        printf("%d ",pointer[i]);
    }
    printf("\n");
    printf("Size of the pointer %lu \n",sizeof(pointer)); // here 8 bytes

    float pi=3.14;
    printf("value of pi=%.2f\n",pi);
    printf("size of pi=%d\n",sizeof(pi)); // 4 bytes
    float* pointer_pi =&pi;
    printf("value of pi using pointer=%.2f\n",*pointer_pi);
    printf("size of pointer_pi=%lu\n",sizeof(pointer_pi)); // 8 bytes


    // once the program is finished deallocate the memory
    // free(p);
    // free(q);
    // free(pointer_pi);
    // free(pointer);

    struct Rectangle *r;
    r=(struct Rectangle*)malloc(sizeof(struct Rectangle));
    r->length=2;
    r-> width=3;
    printf("value of length=%d\n",r->length);
    printf("value of width=%d\n",r->width);
    printf("size of the pointer r= %lu\n",sizeof(r));

    struct Rectangle rect ;
    rect.length=10;
    rect.width=5;
    printf("length of rect =%d and width of rect =%d\n",rect.length,rect.width);
    // pointer to the variable rect
    struct Rectangle *pointer_rect = &rect;
    printf("Using pointer length of rect =%d and width of rect =%d\n",pointer_rect->length,pointer_rect->width);

    // change the value of length of the variable rect from 10 to 20
    pointer_rect -> length =20;
    printf("length of rect =%d and width of rect =%d\n",rect.length,rect.width);

    printf("Using pointer length of rect =%d and width of rect =%d\n",pointer_rect->length,pointer_rect->width);

    // change the width with the pointer

    (*pointer_rect).width=8;
    printf("length of rect =%d and width of rect =%d\n",rect.length,rect.width);
    // normal struct variable you can access with .
    // pointer syntax : (*p).property or p -> property

    return 0;
}

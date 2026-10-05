#include <stdio.h>
#include <stdlib.h>
//
// Created by omar on 05.10.26.
//
struct Rectangle {
    int l;
    int w;
};
int main(int argc, char *argv[]) {
    printf("Hello World\n");

    struct Rectangle r1;
    r1.l=5;
    r1.w=2;
    printf("l= %d ,w=%d\n",r1.l,r1.w);

    // pointer to r1
    struct Rectangle *p_r1=&r1;
    printf("l= %d ,w=%d\n",p_r1->l,p_r1->w);

    // Declare a pointer and initialize it to  structure
    struct Rectangle *pointer ;
    pointer=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    pointer -> l=10;
    pointer -> w = 5;
    printf("length of pointer =%d and width of pointer =%d\n ",pointer->l,pointer->w);

    return 0;
}

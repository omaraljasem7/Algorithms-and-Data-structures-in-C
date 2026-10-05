// Parameter passing
#include <stdio.h>
#include <stdlib.h>
void swap(int x,int y) {
    int temp=x;
    x=y;
    y=temp;
}
// call by Address ( you pass an Address , Address can be saved in a pointer  )
void swap_byAddress(int *x, int *y) {
    printf("Before swapping value of x = %d ,value of y =´%d \n", *x,*y);
    int temp;

    temp = *x ;
    *x= *y;
    *y=temp;
    printf("After swapping value of x= %d ,value of y =%d\n", *x,*y);
}

// Array as a Parameter
// Arrays are only passes as a parameter
void printArray(int A[], int n) {
    int i;
    for (i=0;i<n;i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void printArray_2(int* A, int n) {
    int i;
    for (i=0;i<n;i++) {
        printf("%d ",A[i]);
    }
    printf("\n");
}
// return an Array from a function
int * fun (int n) {
    int *p;
    p= (int *) malloc(n*sizeof(int));
    p[0]= 10;
    p[1]= 20;
    p[2]= 30;
    p[3]= 40;
    p[4]= 50;
    // print elements in the function fun
    printf("Inside the method fun \n");
    printArray(p,5);
    return p;
}

// Accept a struct variable as parameter
// area calc on a struct Rectangle
struct Rectangle {
    int length;
    int breadth;
};
// Pass by Address
int area (struct Rectangle * r) {
    return r->length*r->breadth;
}
// Pass by value
int area_v2 (struct Rectangle r) {
    return r.length*r.breadth;
}
// If you want to modify sth. use the call by address and if you want to just calculate sth use pass by value

void changeLength(struct Rectangle * p , int l) {
    p->length=l;
}
void changeBreadth(struct Rectangle * p , int b) {
    p->breadth=b;
}

// pass the Array of a struct into the method
// I want to pass the Array of the struct itself to the method
// if you pass the struct itself as a parameter then everything will be copied to the variable
struct Test {
    int A[5];
    int n;

};
void fun2 (struct Test t1) {
    printArray(t1.A,t1.n);
    t1.A[0]=1231;
    t1.A[1]=34235;
    printArray(t1.A,t1.n);
}

int main(int argc, char *argv[]) {
    int a,b;
    a = 10 ;
    b=20;
    swap(a,b);
    printf("a=%d, b=%d\n",a,b);
    // The values here of a and b did not change
    swap_byAddress(&a,&b);
    printf("a=%d, b=%d\n",a,b);
    printf("..............\n");
    int A[] = { 2,4,6,8,10};
    printArray(A,5);
    // Other version better using A [] instead of A*
    printArray_2(A,5);

    // the returned address from fun take it in the pointer A
    int *pointer ;
    pointer= fun(5);
    printf("Outside the function fun\n");
    printArray(A,5);

    struct Rectangle r1 = {10,2};
    int result=area(&r1);
    printf("Area =%d\n",result);
    result=area_v2(r1);
    printf("Area =%d\n",result);
    printf("........\n");
    struct Test t = {{2,4,5,6,7},5};
    fun2(t);


}
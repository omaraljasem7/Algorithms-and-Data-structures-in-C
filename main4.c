#include <stdio.h>
#include<stdlib.h>
// Introduction to function and parameter passing
int add (int a,int b) {
    int c=a+b;
    return c;
}
int main(int argc, char *argv[]) {
    int x,y,z;
    x=10;
    y=5;
    z=add(x,y);
    printf("sum =%d\n",z);
}

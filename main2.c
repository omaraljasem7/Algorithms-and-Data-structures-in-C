// Error handling in C
#include <stdio.h>
int divide(int a, int b,int* result ) {
    if (b==0) {
        return -1;
    }
    *result=a/b;
    return 0;
}
int main(int argc, char *argv[]) {
    int result ;
    int status = divide(10,0,&result);

    if (status !=0) {
        printf("Error: Division by zero \n");
        return 1;
    }
    printf("result =%d\n",result);


    return 0;
}

// Error handling in C
#include <stdio.h>
int divide (int a,int b, int *result) {
    if (b==0) {
        return -1;
    }
    *result= a / b ;
    return 0;
}
int main(void) {

    int result ;
    int status = divide(10,0,&result);
    printf("%d\n",status);

    int result2;
    status= divide(10,2,&result2);
    printf("%d\n",status);
    printf("result = %d \n",result2);



    return 0;
}

// Error handling in C
#include <stdio.h>
#include <stdlib.h>

// Enum for Error codes
typedef enum {
    SUCCESS = 0,
    ERR_DIV_ZERO= -1,
    ERR_OVERFLOW=-2,
    ERR_NULL_PTR=-3
}ErrorCode;

ErrorCode divide (int a, int b, int*result) {
    if (result == NULL)
        return ERR_NULL_PTR;
    if (b==0)
        return ERR_DIV_ZERO;
    *result = a/b;
    return SUCCESS;
}


void printError (ErrorCode err, int *result) {
    switch (err) {
        case SUCCESS:
            if (result != NULL) {
                printf("result =%d \n",*result);
            }
            else {
                printf("NULL POINTER error \n");
            }
            break;
        case ERR_DIV_ZERO:
            printf("Error Division by 0 \n");
            break;
        case ERR_NULL_PTR:
            printf("ERROR NULL POINTER \n");
            break;
        case ERR_OVERFLOW:
            printf("ERROR OVERFLOW \n");
            break;
        default:
            printf("Unknown Error \n");
            break;
    }
}


int main(int argc, char *argv[]) {

    int result ;
    ErrorCode err = divide(10,2,&result);
    printError(err,&result);

    ErrorCode err2=divide(10,2,NULL);
    printError(err2,&result);

    ErrorCode err3 = divide(10,0,&result);
    printError(err3,&result);

    return 0;
}

#include <stdio.h>

#define DEBUG_LOG(msg) printf("[File:%s , LINE: %d] , msg = %s \n", __FILE__,__LINE__, msg);

int main(int argc, char *argv[]) {
    DEBUG_LOG("Starting main ");
    int x = 42 ;

    printf("x = %d\n",x);
    DEBUG_LOG("Ending main ");


    return 0;
}

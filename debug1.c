#include <stdio.h>
// # define DEBUG 1 is not defined -> no LOG message for debugging 
#ifdef DEBUG
    #define LOG(msg) printf("[DEBUG] %s\n", msg)
#else
    #define LOG(msg)
#endif

int main(int argc, char *argv[]) {
    LOG("Program started");
    int x = 42;
    printf("Calculation done\n ");
    printf("Result : %d\n",x);
    LOG("Program end");

    return 0;
}

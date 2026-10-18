#include<stdio.h>
#include <stdlib.h>
#include<time.h>

// generate a number between max and min inclusive
int randomInt(int min ,int max) {
    return ( rand() % (max - min + 1) ) +min;
}
int main(int argc, char *argv[]) {
    srand(time(NULL));

    // number betwwen 0 and 9
    printf("%d\n",rand()%10);

    // number between 1 and 100
    printf("%d\n",(rand()%100)+1);

    // number between 0.0 and 1.0
    printf("%.4f\n",(float)rand() /RAND_MAX);
    printf("\n");
    // simulate  a dice between 1 and 6
    for (int i=0;i<5;i++) {
        printf("%d\n",randomInt(1,6));

    }


    return 0;
}

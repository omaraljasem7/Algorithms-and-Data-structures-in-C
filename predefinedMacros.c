#include<stdio.h>
int main() {
    printf("FILE: %s\n",__FILE__);
    printf("LINE:%d\n",__LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time %s\n", __TIME__ );
    printf("Function: %s\n",__func__);
    return 0;
}
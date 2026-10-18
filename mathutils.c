#include "mathutils.h"
#include <stdio.h>
int add(int a,int b) {
    return a+b;
}
int sub (int a, int b) {
    return a -b ;
}
int mul (int a, int b) {
    return a*b;
}
float div (float a, float b) {
    if (b==0) {
        perror("b  = 0 try againg ");
        return 1;
    }
    return a /b;
}
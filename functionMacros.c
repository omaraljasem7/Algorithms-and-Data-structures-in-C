#include<stdio.h>
// just to illustrate the problem with the parenthesis
#define SQUARE(x) (x*x)
#define SQUARE_2(x) ((x) *(x))
#define MAX(x,y) ( (x) > (y) ? (x) : (y) )
#define MIN(x,y) ( (x) < (y) ? (x) : (y) )
#define ABS(x)  ( (x) < 0  ? -(x) : (x)  )

int main(int argc, char *argv[]) {

    printf("%d\n", SQUARE(9));

    printf("(2+3)^2 =%d\n",SQUARE(2+3)); // Here 2+3 * 2+3 = 2+6+3= 11
    printf("%d\n", SQUARE_2(9));
    printf("%d\n", SQUARE_2(2+3)); // 2+3 = 5 and 5^2 = 25
    printf("%d\n" , MAX(2,3));
    printf("%d\n" , MAX(2+3,3+1)); // MAX of 2+3 , 3+1

    printf("MIN = %d\n", MIN(2,3));
    printf("ABS =%d\n", ABS(-2));
    printf("ABS =%d\n", ABS(3));



    








    return 0;
}

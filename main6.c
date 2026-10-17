#include <stdio.h>

/*
 *Difference Between printf and fprintf ,
 *printf will go to the standard output stdout
 *fprintf will go to stderr , it needs 2 arguments
 */
int main(int argc, char *argv[]) {
    printf("Hello world\n");
    fprintf(stderr,"Error\n");
}

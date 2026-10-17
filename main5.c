#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

int main(int argc, char *argv[]) {
    FILE *file = fopen("doesnotexist.txt","r");
    if (file == NULL) {
        printf("error code =%d\n ",errno);
        perror("f open failed"); // it gives automatically No such file or directory
    }
    return 0;
}

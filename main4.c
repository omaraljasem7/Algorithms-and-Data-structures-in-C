#include<stdio.h>
#include <stdlib.h>
#include <errno.h> // for errno
#include <string.h> // for strerror
// error number

int main(int argc, char *argv[]) {
    // Trying to open a file that does not exist
    FILE *file = fopen("doesnotexist.txt","r");
    if (file == NULL) {
        printf("Error code :%d\n",errno); // error code if file does not exist = 2
        printf("Error message: %s \n",strerror(errno)); // the message = No such file or direcotry
    }
    return 0;
}

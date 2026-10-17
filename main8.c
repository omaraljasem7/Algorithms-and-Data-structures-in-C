#include <stdio.h>
#include <stdlib.h>
int processData () {
     // int pointer that points to an array
    // char pointer that points to a string
    // File pointer to open a file

    int *numbers = NULL;
    char * buffer = NULL;
    FILE *file= NULL;

    // create an Array of size 100 dynamically in the Heap

    numbers =(int*) malloc(100*sizeof(int));
    if (numbers == NULL) {
        goto cleanup;
    }
    buffer = (char*) malloc(256);
    if (buffer ==NULL) {
        goto cleanup;
    }
    file = fopen("doesnotexist.txt","r");
    // file=fopen("data.txt","w");
    if (file == NULL) {
        goto cleanup;
    }


    // Here everything is ok
    printf("Hello world from processData() \n ");
    // free and close and return 0

    free(numbers);
    free(buffer);
    fclose(file);
    return 0;

    cleanup:
        fprintf(stderr,"Error Occurred and cleaned up\n");
        if (file )
            fclose(file);
        if (numbers)
            free(numbers);
        if (buffer)
            free(buffer);
        return -1;
}


int main(int argc, char *argv[]) {
    int status = processData();
    printf("status =%d\n",status);
    // try by passing a name to the file and other mode
    // it will print Hello world from processData
    return 0;
}

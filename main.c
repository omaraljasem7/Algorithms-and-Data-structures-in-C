#include <stdio.h>
// Reading , Writing etc. from files
int main(void) {

    FILE * fp = fopen("output.txt","w");
    if (fp == NULL) {
        perror("fopen failed \n");
        return 1;
    }

    fprintf(fp,"HELLO Omar\n");
    fprintf(fp,"Number = %d\n",42);

    fprintf(fp,"Another Line\n");

    fputs("Test Test .....",fp);
    fclose(fp);


    return 0;
}

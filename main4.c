#include<stdio.h>
#include<string.h>
// Append a line of text in the output.txt  with 'a' mode
int main() {
    FILE * fp =fopen("output.txt","a");
    if (fp== NULL) {
        perror("failed to open the file \n");
        return 1;
    }

    fprintf(fp,"This is was appended with 'a' mode\n");
    fclose(fp);

    return 0;
}
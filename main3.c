#include <stdio.h>
int main () {
    // read from the file output.txt character for character

    // open the file

    FILE * fp = fopen("output.txt","r");
    if (fp==NULL) {
        perror("filed to open the file \n");
        return 1;
    }
    int ch ;
    // ch=fgetc(fp) ;
    // putchar(ch); //H
    // // read the next character using fgetc(pointer)
    // ch =fgetc(fp);
    // putchar(ch); // output the character
    // ch = fgetc(fp);
    // putchar(ch);

    // read the file with while loop , end of the file is EOF
    while ((ch=fgetc(fp))!=EOF) {
        putchar(ch);
    }
    // close
    fclose(fp);

    return 0;
}
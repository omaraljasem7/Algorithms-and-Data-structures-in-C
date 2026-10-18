#include<stdio.h>
#include<string.h>
// change position in the file
int main(int argc, char *argv[]) {
    FILE * fp = fopen("output.txt","r");
    if (fp == NULL) {
        perror("failed to open\n");
        return 1;
    }
    // go to the end of the file

    fseek(fp,0,SEEK_END);
    long size = ftell(fp);
    printf("File size= %ld bytes\n",size );
    // go the beginning
    fseek(fp,0,SEEK_SET);
    char line [256];
    fgets(line,sizeof(line),fp) ;
    printf("line =%s\n",line);
    // go to the 11 byte
    fseek(fp,11,SEEK_SET);

    fgets(line,sizeof(line),fp) ;
    printf("line =%s\n",line);

    // go back to the beginning and read

    fseek(fp,0,SEEK_SET);
    fgets(line,sizeof(line),fp) ;
    printf("line =%s\n",line);


    // go to the byte 50 and reed
    fseek(fp,40,SEEK_SET);
    fgets(line,sizeof(line),fp);
    printf("%s\n",line);
    fgets(line,sizeof(line),fp);
    printf("%s\n",line);







}

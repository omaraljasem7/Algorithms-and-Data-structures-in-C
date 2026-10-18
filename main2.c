#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt","r");
    if (fp== NULL) {
        perror("failed  to open the File \n");
        return 1;
    }
    char line [256];
    // fgets(line,sizeof(line),fp);
    // printf("%s",line);
    // with this methode you can read each line one after the other
    // fgets(line,sizeof(line),fp);
    // printf("%s",line);
    // fgets(line,sizeof(line),fp);
    // printf("%s",line);
    // fgets(line,sizeof(line),fp);
    // printf("%s",line);
    // fget(where, size, pointer) -> it returns NULL if it has reached the end of the File

   while (fgets(line,sizeof(line),fp) != NULL) {
       printf("%s",line);
   }

    // close
    fclose(fp);

    return 0;
}


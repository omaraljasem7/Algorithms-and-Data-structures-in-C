#include <stdio.h>
# define PI 3.1415
# define MAX_SIZE 256
# define APP_NAME "My Program"
int main(int argc, char *argv[]) {
    double area = PI * 5 *4 ;
    printf("area=%.2f\n",area);

    char buffer  [MAX_SIZE] = "I do love Makros in C";
    printf("%s\n",buffer);
    printf("APP_NAME=%s\n",APP_NAME);
    return 0;
}

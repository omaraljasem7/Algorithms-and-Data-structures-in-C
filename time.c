#include<stdio.h>
#include<time.h>

int main(int argc, char *argv[]) {
    time_t now = time(NULL);
    printf("Timestamp: %ld \n",now);

    struct tm *local = localtime(&now);
    printf("Year=%d\n",local -> tm_year +1900);
    printf("Month = %d\n",local -> tm_mon+1);
    printf("Day = %d\n",local  -> tm_mday);
    printf("Hour = %d\n",local  -> tm_hour);
    printf("Min = %d\n",local  -> tm_min);
    printf("sec = %d\n",local  -> tm_sec);

    // format

    char buffer [100];
    strftime(buffer,sizeof(buffer),"%Y-%m-%d",local);

    printf("Formatted Date = %s \n",buffer);
    strftime(buffer,sizeof(buffer),"%H-%M-%S",local);
    printf("Formatted Time = %s \n",buffer);

    strftime(buffer,sizeof(buffer),"%Y-%m-%d %H-%M-%S",local);

    printf("Formatted Date and Time = %s \n",buffer);






    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<time.h>

int main(){
    struct tm *local, *gm;
    time_t t;

    t = time(NULL); //return the current time from the system
    local = localtime(&t);
    printf("Date and time with local time");
    printf("\n\n\ntime :  %3d : %3d : %3d\n", local->tm_hour, local->tm_min, local->tm_sec);
    printf("\n\n\ndate : %3d : %3d : %3d\n", local->tm_year+1900, local->tm_mon+1, local->tm_mday);
    printf("\n\nTHis is %d of this week\n\n", local->tm_wday);
    printf("\n\nTHis is %d day of this month\n\n", local->tm_mday);
    printf("\n\nTHis is %d of this year\n\n", local->tm_yday);

    /***************************************************/
    printf("\n\n**********************************************\n\n");

    gm = gmtime(&t);
    printf("Date and time with GMT time");
    printf("\n\n\ntime :  %3d : %3d : %3d\n", gm->tm_hour, gm->tm_min, gm->tm_sec);
    printf("\n\n\ndate : %3d : %3d : %3d\n", gm->tm_year+1900, gm->tm_mon+1, gm->tm_mday);
    printf("\n\nTHis is %d of this week\n\n", gm->tm_wday);
    printf("\n\nTHis is %d day of this month\n\n", gm->tm_mday);
    printf("\n\nTHis is %d of this year\n\n", gm->tm_yday);

    getch();
    return 0;
}

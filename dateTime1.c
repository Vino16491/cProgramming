#include<stdio.h>
#include<conio.h>

/*
char *asctime(cont struct tm *ptr);
day month date hours:minutes:seconds year \n\0

char *ctime(const time_t *time);
day month date hours:minutes:seconds year\n\0


*/

int main() {
    time_t t;

    t = time(NULL);

    puts(ctime(&t));

    puts(asctime(localtime(&t)));
    puts(asctime(gmtime(&t)));

    getch();
    return 0;

}

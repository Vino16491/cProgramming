#include<stdio.h>
#include<conio.h>


/*

    syntax of tmpname function

    char *tmpname(char *name)
*/

int main(){

    char name[L_tmpnam+1];

    tmpnam(name);

    puts(name);


    getch();
    return 0;
}

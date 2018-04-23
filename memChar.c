#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){

    char *p;

    char data[] = "Haelo 4th day of c Programming";

    char search = 'z';

    p = (char *)memchr(data, search, strlen(data));

    if(p != NULL){

        puts(p);
    }else {
        puts("character is not present");
    }




    getch();
    return 0;
}

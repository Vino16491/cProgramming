#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char data[20];

    memset(data, '\0', 20);
    memset(data, 'A', 10);

    puts(data);

    /***************************************************/

    int size = 20;
    char from[size], to[size];

    strcpy(from, "Haelo Great C World");
    memmove(to, from+5, 20);
    puts(from);
    puts(to);


    getch();
    return;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
    int size = 8;
    char from[size], to[size];

    strcpy(from, "Learn C");

    memcpy(to, from, size);

    printf(to);

    getch();
    return ;
}

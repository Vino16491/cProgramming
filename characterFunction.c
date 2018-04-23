#include<stdio.h>
#include<conio.h>
#include<ctype.h>
/*
int isalnum(int ch); check alphanumeric
int isalpha(int ch); check alphabet
int isdigit(int ch); to check whether number passed is digit or not

*/

int main(){
    char ch;

    ch = '85';


    if (isalpha(ch)){
        printf("%c is a alphabet \n", ch);
    }else{
        printf("%c is not a alphabet \n", ch);
    }


    if (isdigit(ch)){
        printf("%c is a digit \n", ch);
    }else{
        printf("%c is not a digit \n", ch);
    }

    if (isalnum(ch)){
        printf("%c is a digit or alphabet \n", ch);
    }else{
        printf("%c is not a digit or alphabet \n", ch);
    }


    getch();
    return 0;
}

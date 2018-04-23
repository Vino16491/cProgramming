#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
int atoi(const char *str)
*/

int main(){

    char num1[] = "1235a";

    char num2[] = "24";

    int a, b;

    a = atoi(num1);
    b = atoi(num2);

    printf("%d\t%d\n\n", a, b);

    printf("\n\n%d", a+b);
/*********************************************/

    div_t n;
    n = div(10, 3);

    printf("\n\n\nThe quotient is %d \n\nThe remainder is %d", n.quot, n.rem);
    printf("\n\n\n the value is 8 %% 5 is: %d \n\n", 8%5);


    getch();
    return 0;
}

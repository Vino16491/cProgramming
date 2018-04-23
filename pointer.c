#include<stdio.h>
#include<conio.h>

int main(){
    int x = 10;

    // & address of operator, & is a unary operator
    /* * value of operator, * is complement of &, * is used to
        get the value

    */

    int *j;

    j = &x;

    printf("\n\n\n the value of x is %d ", x);

    printf("\n\n the address of x is i.e &x is %p",&x);

    printf("\n\n the value of x is i.e *(&x) is %d",*(&x));

    printf("\n\n the memory address stored in j is %p",j);

    printf("\n\n the value pointed by j is %d",*j);

    printf("\n\n the address of pointer j is %p",&j);

    getch();
    return 0;
}

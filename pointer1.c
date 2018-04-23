#include<stdio.h>
#include<conio.h>

int main(){

    int x = 10;

    int *p;
    int **q;
    p = &x;

    q = &p;

    printf("\n\n x value is %d \n\n\n", x);
    printf("\n\n address of x is %u\n\n\n", &x);
    printf("\n\n The value of p is %u\n\n", p);
    printf("\n\n The address of p is %u \n\n", &p);
    printf("\n\n The value pointed by the pointer p is %d\n", *p);
    printf("\n\n The value of q is %u\n", q);
    printf("\n\n The address of q is %u\n", &q);
    printf("\n\n The value of x by using pointer to a pointer i.e q is %d", **q);


    getch();
    return 0;


}

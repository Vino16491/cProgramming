#include<stdio.h>
#include<conio.h>

void display(int, int);

int main(){
    int x, y;

    x = 10;

    y = 20;

    printf("\n\n\n\n x is %d and y is %d", x, y);

    display(x, y);

    getch();
    return 0;
}

void display(int a, int b ){
    printf("\n\n\n\n x is %d and y is %d in display function", a, b);
}

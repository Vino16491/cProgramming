#include<stdio.h>
#include<conio.h>

//global scope variable

int b = 0;
void increment();
int main(){

    int a = 10;
    printf("\n\n\n from main function value of b %d and %d \n\n",b, a);
    b++;
    increment();
    getch();
    return 0;


}

void increment(){
    int a = 20;
    printf("\n\n from increment is \n\n %d and %d", b, a);


}

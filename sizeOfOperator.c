#include<stdio.h>
#include<conio.h>


/*
    size of unary operator
        sizeof(datatype or variable){
            return the lenght in bytes ....
        }

*/

int main(){
    int var[10];
    printf("%d", sizeof(var));
    struct student {
        int age;
        char name[10];
    }a;


    printf("%d", sizeof(a));
    getch();
    return 0;
}

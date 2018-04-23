#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
Storage classes

Automatic -----> Default class
Register ------> use for variable which are frequently used
Static ----> get Default value 0, it increments as the value changes for value
External ----> stored in heap, and are accessible out of block, i.e. they are global, and
are available till the program is running

*/

void inc(){
    {
        static int x;
        printf("Static Storage Class value:  %d\n\n", x++);
    }
    extern int ex;
    printf("External variable value from inc function : %d \n\n\n", ex);

}
int main(){
    inc();
    {
        auto int x;
        printf("%d \n\n", x);

    }
    {
        register int x;
        printf("%d \n\n",x);
    }
    {
        static int x;
        printf("%d\n\n", x);

    }

    inc();
    inc();

    extern int ex;
    printf("External variable value: %d \n\n\n", ex);
    getch();
    return 0;
}
int ex = 100;

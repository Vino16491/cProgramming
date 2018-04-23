#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


/*
int atexit (void (*func) void);
void exit(int exit_code);
void _Exit(int exit_code); terminates program instantly
*/

void onexit(){
    printf("Hi I m called before termination\n\n\n");
    getch();
}

int main(){
    int counter = 0;
    if(atexit(onexit) != 0){
        puts("Failed to register on exit as the termination function\n\n\n");

    }

    while(1){
        printf("%d \n\n", counter);
        if(counter == 10){
            exit(0);
            _Exit(1);
        }
        counter++;

    }
    return 0;
}

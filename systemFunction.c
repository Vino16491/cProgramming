#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    if(system(NULL) != 0){
        system("cmd");

    }else{
        puts("Command processor is not present in OS");

    }

    getch();
    return 0;

}

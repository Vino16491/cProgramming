#include<stdio.h>
#include<conio.h>

int main(){
    if(rename ("abc.txt", "vink.txt") == 0){

        puts("\n\n\n**** file rename successfully **** \n\n\n");
    }else {
        puts("\n\n\n Ooops!!! Error while renaming file \n\n\n");

    }
    getch();
    return 0;

}

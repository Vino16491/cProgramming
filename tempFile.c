#include<stdio.h>
#include<conio.h>

int main(){

    FILE *tmp;

    char data[] = "hello Learner";
    int length = strlen(data);
    int counter = -1;

    tmp = tmpfile();

    if(tmp != NULL){
        puts("\n\n\n Temp File created \n\n\n");

        while(++counter < length){

            fputc(data[counter], tmp);
        }

        rewind(tmp);
        while(!feof(tmp)){

            putchar(fgetc(tmp));
        }
    }else {
        puts("Unable to create the temporary files");
    }

    getch();
    return 0;
}

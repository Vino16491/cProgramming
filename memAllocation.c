#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*
void malloc(no_of_bytes);
void free(current_storage_pointer);

*/

int main(){
    char *p;
    int length;
    puts("\n\nEnter the length of string\n\n");
    scanf("%d", &length);

    p = (char *)malloc(sizeof(char)*(length+1)); // casting malloc to character type by (char *)

    if(p == NULL){

        puts("Memory is not available");
    }else {

        fflush(stdin);
        puts("\n\n\nEnter the String\n\n\n");
        gets(p);
        puts(p);
        free(p);
    }


    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

int main(){

    FILE *pf;

    char ch;

    pf = fopen("stringVink.txt", "r");

    if(pf == NULL){
        printf("\n\n Unable to open File \n\n");
    }else {
        while(!feof(pf)){
            ch = fgetc(pf);
            printf("%c", ch);
        }
        fclose(pf);
    }
}

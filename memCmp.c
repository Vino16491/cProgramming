#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    FILE *fp;
    char ch;
    fp = fopen(__FILE__,"r");
    int length, lenStr1, lenStr2, result;

    char str1[] = "Haelo World in a C Way";
    char str2[] = "Haelo World in a C Wa";

    lenStr1 = strlen(str1);
    lenStr2 = strlen(str2);

    length = lenStr1 <= lenStr2 ? lenStr1 : lenStr2;
    result = memcmp(str1, str2, length);

    if(result == 0)
        printf("First %d no of characters are equal in str1 and str2", length);
    else
        printf("First %d no of characters are not equal in str1 and str2", length);


    if(fp == NULL){
        printf("File is not opened successfully");
    }else{

        printf("\n\n\n");
        do{
            ch = fgetc(fp);
            putchar(ch);

        }while(ch !=EOF);
        fclose(fp);
    }

    getch();
    return 0;

}

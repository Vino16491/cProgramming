#include<stdio.h>
#include<conio.h>

/*
fscanf(file_pointer, "format string", list of address of variables)
fgets(variable, length, file_pointer)
*/

int main(){

    FILE *pf;

//    char ch;
    char data[100];
//    int data1[100];

    feof(pf);

    pf = fopen("vink.txt", "r");

    if(pf == NULL){
        printf("Unable to open the file");
    }else {

        while (!feof(pf)){

//            ch = fgetc(pf);
//            printf("%c\n\n", ch);

            fgets(data, 3, pf);
            printf("THe character in file :  \n\n %s \n\n\n", data);

        }
//        printf("\n\n From fscanf function\n\n\n");
//
//        fscanf(pf, "%s\t%d", data, data1);
//        printf("%s\t%d", data, *data1);


        fclose(pf);

    }

    getch();
    return 0;

}

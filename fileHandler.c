#include<stdio.h>
#include<conio.h>

int main(){

//    fopen("file_name", "mode");
/*
"r" -----> read mode
"w" -----> write mode contents of file will be lost, new data will be written
"a" -----> edit mode will also create file if not present in dir

"r+" ----> open the file for reading and writing
"w+" ----> contents will be lost and new file will be available to read and write
"a+" ----> file will available for read and write with the contents

b at the end for binary file ex---> "ab" or "a+b"

fprintf(file_pointer, "format_specifier", list_of_variables)
*/

    FILE *fPointer, *pf;

    char data[] = "Haelo World in edit mode";
    int len = strlen(data);
    int counter = 0;
    char input[100];


    fPointer = fopen("vink.txt","w");
    pf = fopen("stringVink.txt", "a+");

    if(fPointer == NULL && pf == NULL){
        printf("Unable to create the file");
    }else {

        for (counter = 0; counter<len ; counter++) {
                printf("\n\n Writing the character to the file %c \n\n", data[counter]);
                fputc(data[counter], fPointer);

        }

        printf("\n\n Enter a string to write to the file:");
        gets(input); //used for getting string value from keyboard
        fprintf(pf,"\n\n %s \n\n", input);
        fputs(input, pf);
        printf("Data written successfully: %s", input);

        fclose(fPointer);
        fclose(pf);
    }

    getch();
    return 0;
}


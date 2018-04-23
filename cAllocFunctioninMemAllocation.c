#include<stdio.h>
#include<conio.h>

int main(){

    int *marks, length, counter;
    puts("Enter the number of subjects");
    scanf("%d", &length);

    marks = (int *)calloc(length, sizeof(int));

    if(marks == NULL){

        puts("unable to allocate the memory");
    }else{
        for(counter=0; counter<length; counter++){

            printf("\n\n\nPlease enter the marks of %d subject: \t", counter+1);
            scanf("%d", &marks[counter]);
        }
        for(counter=0; counter<length; counter++){

            printf("\n\n\n Marks in Subject %d \t %d \n\n\n", counter+1, marks[counter]);

        }
    }
    free(marks);
/*********************************************************************************************/


/*realloc() function*/

    char *str;
    str = (char*)malloc(22);

    if(str == NULL){

        puts("unable to allocate memory");
    }else{
        strcpy(str, "Learning C Programming");
        puts(str);

        str = (char *)realloc(str,33);

        strcat(str, " rocks");
        puts(str);
        free(str);
    }



    getch();
    return 0;
}

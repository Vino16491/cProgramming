# include<stdio.h>
#include<conio.h>

/*
define a union

union tagName{
    type member_name;
    type member_name ....
}

*/

union data{
    char string[10];
    int x;
};

void display (union data *d){
    printf("%s", d->string);
}
int main(){

    union data variat;

    strcpy(variat.string, "Haelo Marteroino");
    display(&variat);


/*********************************************************/
printf("\n\n**************************************************\n\n");
    struct Person {
        int age;
        char name[15];
        float height;
    };

    union Student {
        int age;
        char name[15];
        float height;
    };


    printf("%d\n\n", sizeof(struct Person));
    printf("%d\n\n", sizeof(union Student));


/*******************************************************************/
    union data {
        int x;
        char c;
    };

    union data variant;

    variant.x = 23;
    printf("\n\n\n**************************************************\n\n\n");
    printf("size of old union data %d \n\n\n",sizeof(union data));

    printf("%d \n\n\n",variant.x);

    variant.c = 'b';

    printf("%c \n\n\n",variant.c);
    printf("%d \n\n\n",variant.x);


    getch();
    return 0;
}

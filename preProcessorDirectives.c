#include<stdio.h>
#include<conio.h>


/*
  #define macro_name character_sequence
*/
#define LIMIT 10
#define TOP (LIMIT + 1)
#define NAME "Vinod"

#define CHECK(number){\
            if(number >= 11){\
                printf("The number is greater than 10");\
            }else{\
                printf("The number is less than 10");\
            }\
}



int main () {
    int a;
    printf("Please enter any number from 1 to 11 : ");
    scanf("%d",&a);
    CHECK(a);

//    for(int counter = 0; counter <= LIMIT; counter++ ){
//        printf("\n LIMIT %d \n", counter);
//    }
//
//
//    for(int counter = 0; counter <= TOP; counter++ ){
//        printf("\n TOP %d \n", counter);
//    }
    getch();
    return 0;
}

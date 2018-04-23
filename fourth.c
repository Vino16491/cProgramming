#include<stdio.h>
#include<conio.h>

int main(){

// if (expression){statement}
//
//int age = 20;
//
//if(age>= 18){
//    printf("You are an adult \n %d", age);
//}

/*
 * Ternary Operator
 * Condition   ?   True       : false
 * expression1 ? expression 2 : expression 3
*/
//
//    int age = 5;
//    age >= 18 ? printf("You are adult") : printf("You are minor");
//
//    getch();
//    return 0;


/*
 * For loop
 * While loop
 * do while loop
 *
 *
 * while (expression){
 *  statement;
 * }
 *
 * while (true){
 * statement;
 * }
 *
 * for(initialize the counter; test the counter; increment or decrement the counter){
 *
 * statement;
 * statement;
 }
 * do while loop
 * do{
 *  statement;
 *  statement;
 *   }   while(condition is true)

  */



    int counter =1;

// while loop
    printf("\n\nWhile Loop Counter: \n\n ");
    while(counter <=10){
        printf("counter: %2d \n", counter);
        counter++;
    }
// For loop
    printf("\n\nFor loop Counter: \n\n");
    int s = 5;
    for(counter; (counter<=20 && s<=10); counter++){
        printf("counter For: %2d  \n", counter);
        s +=5;
        if(s > 10){
            for (;;){
                printf("\n counter if: %d \n", counter);
                if(s > 5){
                    printf("value of s: %d", s);
                    break;
                }
            }
            break;
        }
    }

// do while loop
    do{
        printf("\n Haelo: %d\n ",counter);
        counter++;

    }while(counter <=20);

}

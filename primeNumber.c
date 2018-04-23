#include<stdio.h>
void display(number) {
    int counter, isprime = 0, no = 1;
    for (counter = 2; counter <= number/2; counter++){
        if((number % counter) == 0){
            isprime = 1;
            break;
        }
    }
//    printf("\n\nList of Prime Numbers \n\n");
    if(isprime == 0){

        printf("\n %d \t %d is a prime number \n", no, number);
        no = no + 1;

    }else {
//        printf("%d is not a prime number", number);
    }

}
int main(){

    int number;

    printf("\n\nPrime Numbers between 1 to 100 \n\n");

    for( number = 1; number > 0; number++){
        display(number);
        if (number > 100)
            break;
    }

    return 0;

}

#include<stdio.h>
#include<conio.h>

int main(){
/*
 * using scanf function for for taking input from user
 * & for saving data into variable
*/

    int age;
    float weight;
    printf("Enter Your Age ");
    scanf("%d", &age);
    printf("Enter Your Weight ");
    scanf("%f", &weight);

    printf("Your age is miraculosly %4d \nYour weight is %4.2f", age, weight);

    getch();
    return age;

}

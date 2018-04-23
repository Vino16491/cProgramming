#include<stdio.h>
#include<conio.h>

int main(){
    //datatype name;
    int age;
    float weight;
    char gender;

    age = 27;
    weight = 80.5;
    gender = 'M';

    printf("%d %3.2f %c", age, weight, gender);


    getch();
    return 0;
}

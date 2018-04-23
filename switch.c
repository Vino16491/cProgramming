#include<stdio.h>
#include<conio.h>

int main(){

/*
 * switch(expression){
        case constant1:
            statement;
            break;
        case constant2:
            statement;
            break;
        default:
            statement;
            break;

 }

*/

int number = 1;
switch(number){
    case 1:
        printf("1 \n");
        break;
    case 2:
        printf("2 \n");
        break;
    case 3:
        printf("3 \n");
        break;
    default:
        printf("default \n");
        break;
}
char ch = 'A';
switch(ch){
    case 'a':
    case 'A':
        printf("a \n");
        break;
    case 'b':
        printf("b \n");
        break;
    case 'c':
        printf("c \n");
        break;
    default:
        printf("default \n");
        break;
}
}

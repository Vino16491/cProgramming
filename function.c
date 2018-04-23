#include<stdio.h>
#include<conio.h>

/*

return type function_name(parameters){
    statement;
}
*/
void display(int, int); //function prototyping
void haelo(int a, int b){
printf("\n\n\n %d and %d \n\n", a, b);
printf(" \n\n\nFunction haelo declared before main function, so no need for prototyping");
}
int main(){

    display(10, 20);
    printf("\n\n\nThis is user defined function haelo printed");
    haelo(50, 60);
    getch();
    return 0;


}

void display(int a, int b){

    printf("This is user defined function printed %d and %d", a, b);
    haelo(30,40);

}

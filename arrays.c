#include<stdio.h>
#include<conio.h>

int main(){

//    int marks[] = {35, 45, 65, 89, 45, 89};
//    float avg [2];//declaring the size of array by giving value 2 in [] brackets
//    avg[0] = 65.5;
//    avg[1] = 75.8;
////    marks[0] = 35;
////    marks[1] = 45;
////    marks[2] = 56;
//
//    printf("%d\n", marks[01]);

    int totalMarks = 0;
    float avgMarks = 0.0;
    int subjects = 6;
    int marks1[subjects];
    int counter;

    printf("\n\n Subject and avg of subject \n\n");


    for (counter =0; counter<subjects; counter++){
        printf("Please enter the marks for each subject: ");
        scanf("%d", &marks1[counter]);
    }
    for (int counter = 0; counter<subjects; counter++){
        printf("\nYou got marks in subject %3d is %4d \n\n", counter, marks1[counter]);
        totalMarks += marks1[counter];
    }
    avgMarks = (totalMarks / subjects);
    printf("Total Marks: %d \n\n", totalMarks);
    printf("Average Marks: %4.2f \n\n\n************", avgMarks);
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>

struct student {
    char name[100];
    int rollNo;
};
void display(struct student *ptr);
int main() {
    int size = 3;
    struct student s[size];

    for (int counter = 0; counter < size; counter++) {
        printf("\n\n Please enter the name and roll number of student %d \n\n", counter+1);

        scanf("%s %d", &s[counter].name, &s[counter].rollNo);

    }

    for (int counter = 0; counter < size; counter++) {
        printf("\n\n Name: %s \t Roll No: %d \n\n", s[counter].name, s[counter].rollNo);
    }


    display(&s[0]);


    getch();
    return 0;
}

void display(struct student *ptr){
    printf("%s \t %d \n\n", ptr->name, ptr->rollNo);
}

#include<stdio.h>
#include<conio.h>


/*
    struct tag_name{
        member1;
        member2;
    };

*/
struct student {
    char name[100];
    int rollNo;
    int age;

};
int main(){

    struct student studentData = {
        "Vinod Chandaliya",
        8,
        27,
    };

    printf("%s %d %d", studentData.name, studentData.rollNo, studentData.age);

    getch();
    return 0;
}

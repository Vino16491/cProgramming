#include<stdio.h>
#include<conio.h>

struct sDetails {
    char add [50];
    int hNo;
};
struct student {

    char name [15];
    int rollNo;
    int age;

    struct sDetails home;
}a,b;



int main() {

//    struct student d, e;

    struct student c= {
        "Vin ya",
        245,
        23,
    };

    strcpy(c.home.add, "Choclate House Farmville");
    c.home.hNo = 78;

    struct student sData = {
        "Vinod Chandaliya",
        245,
        23,
    };

    struct student sData3 = {
        "Vi Chandaliya",
        278,
        23
    };

    struct student sData1 = {
        "Vino Chan",
        25,
        27
    };

    struct student sData2 = {
        "Vin X",
        26,
        29
    };
    a = sData2;
    strcpy(b.name, sData2.name);
    puts(b.name);
//    strcpy(struct student a, struct student sData2);

    printf("%s \t %s \t %d", c.name, c.home.add, c.home.hNo);

    getch();
    return 0;
}

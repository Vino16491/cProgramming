#include<stdio.h>
#include<conio.h>

int main() {

    char name[] = "vinod";
//    int a = strlen(source);
//    char target[a];
    char sirname[] = "chandaliya";

// strcpy(target, source);
// strcat(target, source);

//    strcpy(target, source);


//    printf("\n\n %s \n\n", source);
//    printf("\n\n %s \n\n", target);
    strcat(name, sirname);
    printf("\n\n %s \n\n", name);
    printf("\n\n %s \n\n", sirname);
    getch();
    return 0;
}

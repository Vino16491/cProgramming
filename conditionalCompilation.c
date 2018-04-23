#include<stdio.h>
#include<conio.h>

/*
#if #else #elif #endif

#ifdef #ifndef #undif


#ifdef macro_name
        statements;

#endif
*/
#define MARK 65
#define INTEL
#undef INTEL
int main(){

    #ifdef INTEL
        printf("\n\n Codes for Intel PC");

    #endif // INTEL

     #ifndef INTEL
        printf("\n\n Codes for Non-Intel PC");

    #endif // INTEL


    #if MARK >= 75
        printf("\n\n Your marks are greater than 75 \n\n");
        printf("\n\n You got grade A \n\n");
    #elif MARK >= 50 && MARK < 75
        printf("\n\n Your marks are greater than 50 \n\n");
        printf("\n\n You got grade B \n\n");
    #else
        printf("\n\n Your marks are less\n\n");
        printf("\n\n You got grade C \n\n");

    #endif

    getch();
    return 0;
}

#include<stdio.h>

main(){
    unsigned x;
    int p;
    int n;

    p = 4;
    n = 3;

    printf(x >>(p+1-n) & ~(~0 << n));
    getch();
    return 0;
}

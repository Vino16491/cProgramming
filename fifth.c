#include<stdio.h>
#include<conio.h>

int main(){
int counter;
for (counter =1; counter <=10; counter++){
        if(counter % 2 == 0){
            continue; //used to skip the number
        }

        printf("%d\n", counter);
}

}

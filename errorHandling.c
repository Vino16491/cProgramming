#include<stdio.h>
#include<conio.h>

/*
    int ferror(File *fp);
    void clearerr(File *fp)

*/

int main(){
    int status;

    char data[] = "Haleo File Handler";

    FILE *fp;

    fp = fopen("test.txt","r");

    if(fp != NULL){

        fprintf(fp, "%s", data);
        status = ferror(fp);
        printf("%d", status);
        clearerr(fp);
        printf("%d", status);
        status = ferror(fp); // by clearing error it will return status = 0
        printf("%d", status);
        if(status == 0){
            puts("\n\n\n No read or write errors \n\n\n");
        }else{
            puts("\n\n\n Read or write error has occurred \n\n\n");
        }
    }else {
        puts("\n\n\n Unable to open the file \n\n\n");
    }

    getch();
    return 0;

}

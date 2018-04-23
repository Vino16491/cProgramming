#include<stdio.h>
#include<conio.h>

int main(){

    int status;

    status = remove("delete/avb_delete.txt");//path of the file to delete permanently

    printf("%d \n", status);
    if(status== 0){

        puts("\n\n\n**** file deleted successfully, it cannot be recovered **** \n\n\n");
    }else {
        puts("\n\n\n Ooops!!! Error while deleting file \n\n\n");

    }
    getch();
    return 0;

}

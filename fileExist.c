//Check File Exist or no
#include<stdio.h>
#include<string.h>

int main(){
    FILE *fptr;
    fptr=fopen("replace_data1.c","r");
    if (fptr==NULL){
        printf("File does not exist\n");
    }
    else
    {
        fclose(fptr);
    }
    return 0;
}
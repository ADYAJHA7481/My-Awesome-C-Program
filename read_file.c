//Write a program to read a string from a file & output to the user.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("new.txt","r");

    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character = %c",ch);
    fclose(fptr);
    return 0;
}

//Make a Program to read 5 integers from a file.
#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("new.txt","r");

    int ch;
    fscanf(fptr,"%d",&ch);
    printf("\ncharacter = %d",ch);
    fscanf(fptr,"%d",&ch);
    printf("\ncharacter = %d",ch);
    fscanf(fptr,"%d",&ch);
    printf("\ncharacter = %d",ch);
    fscanf(fptr,"%d",&ch);
    printf("\ncharacter = %d",ch);
    fscanf(fptr,"%d",&ch);
    printf("\ncharacter = %d",ch);
    fclose(fptr);
    return 0;
}
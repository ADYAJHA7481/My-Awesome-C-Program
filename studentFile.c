//Make a program to input student information from a user & enter it to a file.
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    fptr=fopen("new.txt","a");

    char name[100];
    int age;
    float cgpa;

    printf("Enter Name : ");
    scanf("%s",name);
    printf("Enter Age : ");
    scanf("%d",&age);
    printf("Enter cgpa : ");
    scanf("%f",&cgpa);

    fprintf(fptr,"\n%s\n",name);
    fprintf(fptr,"%d\n",age);
    fprintf(fptr,"%f\n",cgpa);

    fclose(fptr);
    return 0;
}
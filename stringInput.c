//Write a program to take input until user don't press enter
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char ch;
    int i=0;

    printf("Enter String : ");
    while (ch !='\n')
    {
        scanf("%c",&ch);
        str[i]= ch;
        i++;
    }
    str[i]='\0';
    printf("You Entered : ");
    puts(str);
}
//WRITE A FUNCTION NAMED SLICE, WHICH TAKES A STRING & RETURNS A SLICED STRING FROM INDEX N TO M.
#include <stdio.h>
#include<string.h>

void slice(char str[],int n,int m);

int main (){
    char string[]="CutiePie";     //Enter String
    slice(string,2,6);   //Enter Slice like 2,6
}

void slice(char str[],int n ,int m){
    char newStr[100];
    int j=0;
    for (int i=n ; i <=m; i++,j++)
    {
        newStr[j]= str[i];
    }
    newStr[j]='\0';
    puts(newStr);
}
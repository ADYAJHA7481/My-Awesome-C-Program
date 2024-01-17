// In an array of string, find how many times does a number 'X' occurs.

#include<stdio.h>
#include<string.h>

void countX(char str[]);

int main(){

    char str[100];
    printf("Enter Text : ");
    scanf("%s",&str);
    countX(str);

}

void countX(char str[]){
    int count=0;
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i]=='x' || str[i]=='X')
        {
            count++;
        }        
    }
    if (count==0)
    {
        printf("X is Not Present in This String!!!!");
    }
    else
    {
        printf("X Comes %d times in This String!!!!",count);
    }
    
    return ;
}
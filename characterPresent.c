//CHECK IF A GIVEN CHARACTER IS PRESENT IN A STRING OR NOT.
#include<stdio.h>
#include<string.h>
void checkCharacter(char str[],char ch);

int main(){
    char str[100];
    printf("Enter Text : ");
    scanf("%s",&str);

    checkCharacter(str,'d');  // check d is present or not
}

void checkCharacter(char str[],char ch){
    int count=0;
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i] == ch) 
        {
            printf("Character is present!!");
            return;
        } 
    }
    printf("Character is Not present!!"); 
}
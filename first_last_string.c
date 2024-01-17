// CREATE A STRING FIRSTNAME & LASTNAME TO STORE DETAILS OF USER & PRINT ALL THE CHARACTERS USING A LOOP.
#include<stdio.h>
void printString(char arr[]);

int main(){
    char firstName[]="Adya";
    char lastName[]="jha";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}


//STORE STRING 
#include<stdio.h>

int main(){
    char name[50];
    printf("Your Name : ");
    scanf("%s",name);
    printf("Your Name Is : %s",name);   

    return 0;
}
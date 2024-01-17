// KEEP TAKING NUMBERS AS INPUT FROM USER UNTIL USER ENTERS AN ODD NUMBER
#include<stdio.h>
int main(){
    int number;
    do
    {
        printf("Enter Number : ");
        scanf("%d",&number);
        if (number%2!=0)
        {
            break;
        }
    }while (1);
    printf("This Code Was Termineted Because You Entered An Odd Number!!!!");
    return 0;
}
//WRITE A PROGRAM TO PRINT NATURAL NO.
#include <stdio.h>
int main (){
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    if (number>0)
    {
        printf("%d is a Netural No.",number);
    }
    else{
        printf("%d is Not a Netural No.",number);
    }
    return 0;
    }
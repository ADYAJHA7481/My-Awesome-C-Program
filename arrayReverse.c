//Write A Program to Print Reverse an array

#include<stdio.h>
#define n 10

int main(){
    int a[n] = {15,34,78,12,9,51,67,43,23,7};
    int i;

    //Original order
    for (i = 0; i <= 9; i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\n");

    //Reverse order
    for (i = 9; i>=0; i--)
    {
        printf("%d\t",a[i]);
    }
    
    return 0;
}
//Write a function to find sum of digits of a number
#include "stdio.h"
int main()
{
    int  number[10]; //  array of ten block
    int sum = 0;
    for (int i=0;i<10;i++)
    {
        printf("Enter Price Of Product [%d] : ",i+1);
        scanf("%d",&number[i]);
        sum=sum+number[i];
    }
    printf("Sum of all numbers are = %d ",sum);
    return 0;
}
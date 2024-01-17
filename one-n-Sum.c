// WRITE A PROGRAM TO SUM OF ONE TO THAT NUMBER 
#include <stdio.h>
int main(){
    int number , sum;
    printf("Enter Number : ");
    scanf("%d",&number);
    sum=0;
    for (int i = 1; i <= number; i++)
    {
        sum=sum+i;
    }
    printf("sum of 1 to %d is : %d ",number,sum);
    return 0;
}
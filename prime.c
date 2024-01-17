//Write a Program to find Prime number
#include <stdio.h>
int main (){
    int number , count ;
    printf("Enter Number : ");
    scanf("%d",&number);
    count=0;
    for (int i = 1; i <= number; i++)
    {
        if (number%i==0)
        {
            count+=1;
        }
    }
    if (count==2)
    {
        printf("\n%d is a Prime Number",number); 
    }
    else{
        printf("\n%d is Not a Prime Number",number); 
    }
}
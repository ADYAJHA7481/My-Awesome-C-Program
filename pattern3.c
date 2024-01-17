// print Pattern like    * * * * 
//                       * * * 
//                       * * 
//                       * 

#include<stdio.h>
int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d",&number);
    int x,y;
    for (x = 1; x <= number; x++)
    {
        for (y= 1; y <=number; y++)
        {
            if (y<x){
                printf(" ");}
            else{
                printf("\t*");}
        }
        printf("\n"); 
    }
    return 0;
}
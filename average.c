// WRITE A PROGRAM TO PRINT THE AVERAGE OF 3 NUMBERS
#include <stdio.h>
int main(){
    int first,second,third,sum ;
    float average;
    printf("Enter First Number : ");
    scanf("%d",&first);
    printf("Enter Second Number : ");
    scanf("%d",&second);
    printf("Enter Third Number : ");
    scanf("%d",&third);
    sum=first+second+third;
    average=sum/3;
    printf("Average is %f ",average);
}
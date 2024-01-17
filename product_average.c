// WRITE A FUNCTION TO CALCULATE THE SUM,PRODUCT & AVERAGE OF 2 NUMBERS. PRINT THAT AVERAGE IN THE MAIN FUNCTION.
#include<stdio.h>
void sum_product(int a,int b);

int main(){
    int x , y;
    float ave;
    printf("Enter First Number : ");
    scanf("%d",&x);
    printf("Enter Second Number : ");
    scanf("%d",&y);
    sum_product(x,y);
    ave=(x+y)/2;
    printf("\nAverage of %d and %d = %f",x,y,ave);
    return 0;
}

void sum_product(int a , int b){
    int sum,pro;
    sum=a+b;
    pro=a*b;
    printf("Sum of %d and %d = %d",a,b,sum);
    printf("\nProduct of %d and %d = %d",a,b,pro);
}
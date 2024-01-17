//Write a program in C to find the largest number between two numbers using a pointer.
#include<stdio.h>
int main(){
    int a , b ;
    printf("Enter First Number : ");
    scanf("%d",&a);
    printf("Enter Second Number : ");
    scanf("%d",&b);
    int *fp =&a;
    int *sp=&b;
    if (*fp>*sp)
    {
        printf("%d is greater",*fp);
    }
    else{
        printf("%d is greater",*sp);
    }
    return 0;
}
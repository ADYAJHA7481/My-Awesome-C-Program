//WRITE A PROGRAM TO FIND POWER OF A NUMBER
#include <stdio.h>
#include<math.h>     //include MATH.H for use POW function
int main(){
    int a , b ,c;
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    c = pow(a,b);
    printf("%d^%d is : %d",a,b,c);
    return 0;
}

//WRITE A PROGRAM TO FIND SQUARE ROOT OF A NUMBER
#include<stdio.h>
#include<math.h>
int main(){
    int number , square_root;
    printf("Enter Number : ");
    scanf("%d",&number);
    square_root=sqrt(number);
    printf("Square root of %d is : %d ",number,square_root);
    return 0;
}
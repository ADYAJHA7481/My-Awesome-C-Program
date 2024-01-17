//Make Your Own pow Function
#include<stdio.h>
int power(int x , int y);
int main(){
    int a , b;
    printf("Enter Number : ");
    scanf("%d",&a);
    printf("Enter Power : ");
    scanf("%d",&b);
    int all=power(a,b);
    printf("result is %d",all);
    return 0;
}

int power(int x , int y){
    int z=1;
    for (int i = 1; i <=y; i++)
    {
        z=z*x;
    }
    return z;
}
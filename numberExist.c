//Write A Program to check a number exists or not

#include<stdio.h>
#define n 10

int main(){
    int exist[n]={0};
    int m;
    printf("Enter the number : ");
    scanf("%d",&m);

    int rem;
    while (m>0)
    {
        rem = m %10;
        if (exist[rem]==1)
        {
            break;
        }
        exist[rem]=1;
        m=m/10;
    }
    
    if (m>0)
    {
        printf("Yes");
    }
    
    else{
        printf("No");
    }

    
    // printf("\nNumber Of Elements = %d",sizeof(exist)/sizeof(exist[0]));

    return 0;
}
//CREATE A STRUCTURE TO STORE VECTORS. THEN MAKE A FUNCTION TO RETURN SUM OF 2 VECTORS.
#include<stdio.h>
#include<string.h> 

struct vector
{
    int x;
    int y;
};

void calcSum(struct vector v1,struct vector v2,struct vector sum);

int main(){
    struct vector v1={5,6};
    struct vector v2={3,7};
    struct vector sum={0};
    calcSum(v1,v2,sum);
    return 0;
}

void calcSum(struct vector v1,struct vector v2,struct vector sum){
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;   
    printf("sum of x is %d",sum.x);
    printf("\nsum of y is %d",sum.y);
}
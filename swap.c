// WRITE A PROGRAM TO SWAP TWO NUMBERS
#include<stdio.h>
int main(){
    int first , second ,swap;
    printf("Enter First Number : ");
    scanf("%d",&first);
    printf("Enter Second Number : ");
    scanf("%d",&second);
    swap=first;
    first=second;
    second=swap;
    printf("\nAfter Swapping");
    printf("\nFirst Number is : %d",first);
    printf("\nSecond Number is : %d",second);
    return 0;
}


// WRITE A FUNCTION TO SWAP TWO NUMBERS.           
#include<stdio.h>

void swap(int a,int b);
void _swap(int *a,int *b);

int main(){
    int first , second ;
    printf("Enter First Number : ");
    scanf("%d",&first);
    printf("Enter Second Number : ");
    scanf("%d",&second);

    swap(first,second);
    printf("\nFirst number is %d and Second number is %d ",first,second);

    _swap(&first,&second);
    printf("\nFirst number is %d and Second number is %d ",first,second);

    return 0;
}

//CALL BY VALUE
void swap(int a,int b){                        
    int c=a;
    a=b;
    b=c;
    printf("\nFirst number is %d and Second number is %d ",a,b);
}

//CALL BY REFERENCE
void _swap(int *a , int *b){
    int c=*a;
    *a=*b;
    *b=c;
    printf("\nFirst number is %d and Second number is %d ",*a,*b);
}
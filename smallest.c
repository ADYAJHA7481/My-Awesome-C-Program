// WRITE A PROGRAM TO PRINT THE SMALLEST NUMBER OF TWO
# include <stdio.h>
int main(){
    int first , second;
    printf("Enter First Number : ");
    scanf("%d",&first);
    printf("Enter Second Number : ");
    scanf("%d",&second);
    if (first>second)
    {
        printf("The Smallest no of %d and %d is : %d",first,second,second);
    }
    else{
        printf("The Smallest no of %d and %d is : %d",first,second,first);
    }
    
}

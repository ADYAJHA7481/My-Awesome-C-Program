// CHECK THE NUMBER IS EVEN OR ODD //
# include <stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("%d is an Even Number",a);
    }
    else{
        printf("%d is an Odd Number",a);
    }
}


//WRITE A FUNCTION TO COUNT THE NUMNER OF ODD NUMBERS IN AN ARRAY.
#include<stdio.h>
int countOdd(int arr[],int n);

int main(){
    int aray[]={5,9,5,2,9};
    printf("%d",countOdd(aray,6));


    return 0;
}

int countOdd(int arr[],int n){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 !=0)
        {
            count++;
        }
        
    }
    return count;
}
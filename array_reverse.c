//  WHAT IS ARRAY :- array is fixed size sequence collection of elements of same data type.
//  WHY :- when we have to store multiple value of same type inside a single variable then array can be used for this purpose
// HOW :- an array can be either declared using SMA OR DMA[CALLOC,REALLOC].

//Write a Function to reverse an array.

#include<stdio.h>

int reverse(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int array[]={5,9,7,2,8};
    reverse(array,5);
    printarr(array,5);
    return 0;
}

void printarr(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int reverse(int arr[],int n){
    int first,second;
    for (int i = 0; i<n/2; i++)
    {
       first=arr[i];
       second=arr[n-i-1];
       arr[i]=second;
       arr[n-i-1]=first;
    }
    return 0;
}

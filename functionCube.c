// Write a function to find cube of a number
#include<stdio.h>
void printCube(int n);
int main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    printCube(n);
    return 0;
}

void printCube(int n){
    int cube;
    cube = n* n*n;
    printf("%d",cube);
}

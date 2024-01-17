//WRITE A PROGRAM TO ALLOCATE MEMORY OF SIZE N, WHERE N IS ENTERED BY THE USER.
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    ptr=(int *) calloc(n ,sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }

    return 0;
}
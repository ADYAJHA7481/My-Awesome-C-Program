//Allocate memory for 500 integers using calloc & then store first 500 natural numbers in that space
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    //Allocate memory for 500 integers
    ptr=(int*) calloc(500 , sizeof(int));

    //Store the first 500 natural numbers
    for (int i = 0; i < 500; i++)
    {
        ptr[i]=i+1;
    }
    //Print the stored natural numbers
    printf("First 500 natural numbers stored in the allocated memory:\n");
    for (int i = 0; i < 500; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    //Free the allocated memory
    free(ptr);
    return 0;
}
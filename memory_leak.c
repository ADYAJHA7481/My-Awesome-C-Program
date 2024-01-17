//Search about what is 'memory leak' in C.

/*A Memory leak in C programming occurs when a program allocates memory dynamically but fails to release that memory when it's no longer needed.

To avoid memory leaks in C programming, you should always pair memory allocation with memory deallocation using 'free' when you are done with a dynamically allocated block of memory.
*/

//Here is a simple example of a memory leak:
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr = (int *)malloc(sizeof(int));     //Allocate memory
    if (ptr==NULL)
    {
        fprintf(stderr,"Memory allocation failed!!!\n");
        return 1;
    }
    //Do some work with ptr....
    //Oops! Forget to free the allocated memory.
    //This is a memory leak.

    return 0;    
}
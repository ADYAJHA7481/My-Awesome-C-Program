//Write a Program to Write All The Odd Numbers From 1 To N In A File.
#include<stdio.h>
int main(){
    FILE *fptr;
    // fptr=fopen("new.txt","w");    
    fptr=fopen("new.txt","a");

    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    for (int i=1; i <=n; i++)
    {
        if (i%2!=0)
        {
            fprintf(fptr,"%d\n",i);
        }    
    }
    fclose(fptr);
    return 0;
}
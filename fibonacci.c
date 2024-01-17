// Write a Program to print n terms of the fibonacci sequence
# include <stdio.h>
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);

    int fib[a];
    fib[0]=0;
    fib[1]=1;

    printf("%d\t%d\t",fib[0],fib[1]);
    for (int i = 2; i < a; i++)     
    {
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d\t",fib[i]);
    }
    printf("\n");
    return 0;
}
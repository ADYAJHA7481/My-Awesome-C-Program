//WILL THE ADDRESS OUTPUT BE SAME
#include<stdio.h>
void printAddress(int n);

int main(){
    int n =4;
    printf("%p\n",&n);
    printAddress(n);    //Function Call

    return 0;
}

void printAddress(int n){
    printf("%p\n",&n);
}
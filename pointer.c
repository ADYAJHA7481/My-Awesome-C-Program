// FORMAT SPECIFIER IN POINTER
#include<stdio.h>
int main(){
    int age=15;
    int *ptr=&age;
    printf("%u",&age);   //%u prints integers values
    printf("\n%p",&age);  // %p prints hexadecimal values
}
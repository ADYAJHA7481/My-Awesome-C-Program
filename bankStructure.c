//MAKE A STRUCTURE TO STORE BANK ACCOUNT INFORMATION  OF A CUSTOMER OF ABC BANK. ALSO, MAKE AN ALIAS FOR IT.

#include<stdio.h>
#include<string.h>

typedef struct bankAccount
{
    int account;
    char name[100];
} acc;

int main(){
    acc acc1={3660,"Adya"};
    acc acc2={5677,"Divya"};
    acc acc3={8215,"Aditya"};
    acc acc4={2310,"chhoti"};
    acc acc5={4527,"pari"};

    printf("\n\nName is %s",acc1.name);
    printf("\nPhno is %d",acc1.account);

    printf("\n\nName is %s",acc2.name);
    printf("\nPhno is %d",acc2.account);

    printf("\n\nName is %s",acc3.name);
    printf("\nPhno is %d",acc3.account);

    printf("\n\nName is %s",acc4.name);
    printf("\nPhno is %d",acc4.account);

    printf("\n\nName is %s",acc5.name);
    printf("\nPhno is %d",acc5.account);

}

//FIND THE SALTED FORM OF A PASSWORD ENTERED BY USER IF THE SALT IS "123" & ADDED AT THE END
#include <stdio.h>
#include<string.h>
void salting(char password[]);
int main (){
    char password[100] ;
    printf("Enter Password : ");
    scanf("%s",&password);
    salting(password);
}

void salting(char password[]){
    char salt[]="123";
    char newPassword[200];
    strcpy(newPassword,password);
    strcat(newPassword,salt);
    puts(newPassword);
}
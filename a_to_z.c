// WRITE A PROGRAM TO PRINT a TO z (SMALL)
#include<stdio.h>
int main(){
    for (char i = 'a'; i <= 'z'; i++) 
    {
        printf("%c\n",i);
    }
    return 0;
}

// WRITE A PROGRAM TO PRINT A TO Z (CAPITAL)
#include<stdio.h>
int main(){
    for (char i = 'A'; i <= 'Z'; i++)
    {
        printf("%c\n",i);
    }
    return 0;
}

// WRITE A PROGRAM TO PRINT CONSONENT 
#include<stdio.h>
int main(){
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (i == 97 || i==101 || i==105 || i==111 || i==117 )
        {
            continue;
        }
        printf("%c\n",i);
    }
    return 0;
 }

// WRITE A PROGRAM TO PRINT VOWEL
#include<stdio.h>
int main(){
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (i == 97 || i==101 || i==105 || i==111 || i==117 )
        {
            printf("%c\n",i);
        }
    }
    return 0;
 }

// WRITE A PROGRAM TO CHANGE UPPERCASE
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i;
    printf("Enter String : ");
    scanf("%s",str);
    printf("\nString is : %s",str);
    for (i =0; i <=strlen(str); i++)
    {
        if (str[i]>= 97 && str[i]<=122)
        str[i]=str[i]-32;
    }
    printf("\nString is Upercase is : %s",str);
    return 0;
}

// // WRITE A PROGRAM TO CHANGE LOWERCASE
#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int i;
    printf("Enter String : "); 
    scanf("%s",str);
    printf("String is : %s",str);
    for (i =0; i <=strlen(str); i++)
    {
        if (str[i]>= 65 && str[i]<=90)
        str[i]=str[i]+32;
    }
    printf("\nString is Lowercase is %s",str);
    return 0;
}
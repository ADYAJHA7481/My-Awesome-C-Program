// WRITE A FUNCTION TO COUNT THE OCCURRENCE OF VOWELS AND CONSONENT IN A STRING
#include<stdio.h>
#include<string.h>
void countVowels(char str[]);

int main(){
    char str[]="Hey Beautiful";
    countVowels(str);
}

void countVowels(char str[]){
    int count=0;
    int con;
    for (int i = 0; str[i] !='\0'; i++)
    {
        if (str[i] == 'a' ||str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }    
    }
    printf("vowels are : %d",count);
    con=strlen(str)-count;
    printf("\nConsonents are : %d",con);
    return;
}
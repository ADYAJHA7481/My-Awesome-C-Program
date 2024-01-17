//WRITE A PROGRAM TO PRINT TABLE OF A NUMBER
// #include<stdio.h>
// int main(){
//     int number , table;
//     printf("Enter Number : ");
//     scanf("%d",&number);
//     for (int i = 1; i <=10; i++)
//     {
//       table=number*i;  
//       printf("%d\n",table);
//     }
//     return 0;
// }

// WRITE A PROGRAM TO PRINT TABLE ONE TO THAT NUMBER
#include<stdio.h>
int main(){
    int number , table;
    printf("Enter Number : ");
    scanf("%d",&number);
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <=number; j++)
        {
            table=j*i;  
            printf("%d\t",table);
        }
        printf("\n");
    }
    return 0;
    }
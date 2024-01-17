// PRINT 1(TRUE) OR 0(FALSE) FOR FOLLOWING STATEMENTS 
// 1.. IF IT'S SUNDAY & IT,S SNOWING 
#include<stdio.h>
int main(){
    int issunday = 1;
    int issnowing = 1;
    printf("%d",issunday && issnowing);
    return 0;
}
// 2.. IF IT'S SUNDAY or IT,S RAINING
#include<stdio.h>
int main(){
    int issunday = 0;
    int israining = 1;
    printf("%d",issunday || israining);
    return 0;
}
// 2.. IF A NUMBER IS GREATER THAN 9 & LESS THAN 100
#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    printf("%d \n", x>9 && x<100);
    return 0;
}

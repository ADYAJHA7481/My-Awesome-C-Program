// Write a program to print "Hot" or "Cold" depending on the temperature user enters.
#include <stdio.h>
int main(){
    float tempreture;
    printf("Enter tempreture : ");
    scanf("%f",&tempreture);
    if (tempreture<=37)
    {
        printf("The Weather is Cold");
    }
    else
    {
        printf("The Weather is Hot");
    }
    return 0;
}

// Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include <stdio.h>
int main(){
    void temp(float t);
    float tempreture;
    printf("Enter tempreture : ");
    scanf("%f",&tempreture);
    temp(tempreture);
    return 0;
}
void temp(float t)
{
    if (t<=37)
    {
       printf("The Weather is Cold"); 
    }
    else{
       printf("The Weather is Hot"); 
    }
}
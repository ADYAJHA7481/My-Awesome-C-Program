//WRITE A PROGRAM TO CALCULATE FAHRENHEIT TO CELSIUS
// .F = (9/5*.c)+32
// .C=5/9(f-32)
#include <stdio.h>
int main(){
    float fahrenheit,celsius;
    printf("Enter Temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);
    celsius = (fahrenheit-32) * 5/9;
    printf("Temperature in Celsius : %.3f\n",celsius); // Here .3f means how many digit printed after decimal
    return 0;
}

//WRITE A PROGRAM TO CALCULATE CELSIUS TO FAHRENHEIT 
#include <stdio.h>
int main(){
    float fahrenheit,celsius;
    printf("Enter Temperature in celsius : ");
    scanf("%f",&celsius);
    fahrenheit =(9/5*celsius)+32;
    printf("Temperature in Fahrenheit : %.2f\n",fahrenheit); // Here .2f means how many digit printed after decimal
    return 0;
}
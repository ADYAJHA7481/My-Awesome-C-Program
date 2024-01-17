// WRITE A PROGRAM TO SQUARE OF A NUMBER
#include <stdio.h>
int main(){
    int num ;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Square of %d is %d ",num,num*num);
    return 0;
}


// Take a number from user & output its cube
#include <stdio.h>
int main(){
    int num ;
    printf("Enter Number : "); 
    scanf("%d",&num);
    printf("Cube of %d is %d ",num,num*num*num);
    return 0;
 }


// WRITE A PROGRAM TO CALCULATE AREA OF A CIRCLE
#include <stdio.h>
int main(){
    float radius , area;
    printf("Enter Radius : ");
    scanf("%f",&radius);
    area= 3.14*radius*radius;
    printf("Area of circle is %f ",area);
    return 0;
}

// WRITE A PROGRAM TO CALCULATE PERIMETER OF RECTANGLE.
#include <stdio.h>
int main(){
    int length , width,perimeter;
    printf("Enter Length : ");
    scanf("%d",&length);
    printf("Enter Width : ");
    scanf("%d",&width);
    perimeter= 2*length*width;
    printf("Perimeter of Rectangle is %d ",perimeter);
    return 0;
}
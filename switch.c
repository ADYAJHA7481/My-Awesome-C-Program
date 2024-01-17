// switch (number)
// {
// case C1:// do some thing
//     break;

// case C2: // do something
//     break;

// default:// do something
// }

# include <stdio.h>
int main(){

    int day;
    printf("Enter Number : ");
    scanf("%d",&day);
    
    switch (day)
    {
    case 1:   //HERE 1 IS INPUT 
        printf("TODAY IS A SUNDAY");
        break;

    case 2:   //HERE 2 IS INPUT 
        printf("TODAY IS A MONDAY");
        break;
    
    case 3:   //HERE 3 IS INPUT 
        printf("TODAY IS A TUESDAY");
        break;

    case 4:   //HERE 4 IS INPUT 
        printf("TODAY IS A WEDNESDAY");
        break;
    
    case 5:   //HERE 5 IS INPUT 
        printf("TODAY IS A THRUSDAY");
        break;

    case 6:   //HERE 6 IS INPUT 
        printf("TODAY IS A FRIDAY");
        break;
    case 7:   //HERE 7 IS INPUT 
    printf("TODAY IS A SATURDAY");
        break;
    default:
        printf("ENTER VALID NUMBER");
        break;
    }
}

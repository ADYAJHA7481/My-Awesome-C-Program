//Write a Program To Ptint Smiley_face_EMOJI.
#include<stdio.h>
int main()
{
    int n=5,x,y;
    for (x = 1; x <= n; x++){
        for (y= 1; y <=n; y++)
        {
            if (y<=x){
                printf("\U0001F600");}    //Emoji Symbol
            else{printf(" ");}
        }
        for (y=n; y >=1 ; y--)  
        {
            if (y<=x)
            {
                printf("\U0001F600");  // To Print this use Run and Debug Otherwise This Will be Print Like a Symbol
            }
            else{ printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
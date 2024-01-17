// print 1 to 50 and skip 21
#include<stdio.h>
int main(){
    for (int i = 1; i <=15; i++)
    {
        if (i==7||i==11)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
    }
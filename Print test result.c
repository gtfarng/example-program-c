#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
    sum = a+b;
    if (sum >= 80)
    printf("Excellent");
    else if ( 60 <= sum && sum < 80)
        {
            if (a >= 25 && b >= 25)
                printf("Pass");
            else
                printf("Fail");
        }
    
    else if ( sum < 60)
    printf("Fail");

    exit(EXIT_SUCCESS);
}
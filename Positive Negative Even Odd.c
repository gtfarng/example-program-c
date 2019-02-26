#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a[3],i,p=0,n=0,e=0,o=0,b;
     for(i=0;i<3;i++)
    {
        scanf("%d",&b);
        if ( b >= 0 )
            p++;
        else 
            n++;
        if ( b%2 == 0)
            e++;
        else 
            o++;
            
    }

    printf("Positive: %d\n",p);
    printf("Negative: %d\n",n);
    printf("Even: %d\n",e);
    printf("Odd: %d\n",o);
     

    exit(EXIT_SUCCESS);
}
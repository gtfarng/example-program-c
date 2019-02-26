#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i;
    float sum = 0;
    for(i=0;i<10;i++)
    {
         scanf("%d",&a[i]);
         sum += a[i];
    }
    printf("Pass: ");
    for(i=0;i<10;i++)
    {
        if(a[i] >= 50)
         printf(" %d ",a[i]);
    }
    printf("\nFail: ");
    for(i=0;i<10;i++)
    {
        if(a[i] < 50)
         printf(" %d",a[i]);
    }
    printf("\nAverage: %.2f",sum/10);



    exit(EXIT_SUCCESS);
}
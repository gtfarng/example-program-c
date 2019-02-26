#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,sum = 0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        sum += i;
    }
    printf("%d",sum);
    exit(EXIT_SUCCESS);
}
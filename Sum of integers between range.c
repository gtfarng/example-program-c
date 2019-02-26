#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,sum=0,i;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
        {
            sum += i;
        }
    printf("%d",sum);
    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a=1,x=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        a+=x;
        x+=2;
    }
    exit(EXIT_SUCCESS);
}
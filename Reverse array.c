#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]*a[i]);
    }
    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a=1;
    scanf("%d",&n);
    for(i=1;a<=n;i++){
        printf("%d ",a);
        a = a+i;
    }

    exit(EXIT_SUCCESS);
}
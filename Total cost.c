#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n],sum = 0;
    for(i=0;i<n;i++)    {
        scanf("%f",&a[i]);
        sum += a[i];
    }
    printf("%.2f\n",sum);
    printf("%.2f",sum-(sum*0.05));
    

    exit(EXIT_SUCCESS);
}
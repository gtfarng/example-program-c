#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum[6]={0},total=0;
    scanf("%d",&a);
    for(i=1;i<=6;i++){
        sum[i-1]= a*i;
    }
    for(i=0;i<6;i++){
        total += sum[i];
    }
    printf("%d",total);

    exit(EXIT_SUCCESS);
}
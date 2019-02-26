#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,j,sum[2] = {0},sum1 = 0;
    for(i=0;i<2;i++){
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            if(j%5 == 0 || j%7 == 0)
                sum[i] += j;
        }
        sum1 += sum[i];
    }
   
    printf("%d",sum1);
    exit(EXIT_SUCCESS);
}
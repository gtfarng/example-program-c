#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,sum = 0;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if( i%2 == 0){
            sum += i;   
        }
    }
    printf("%d",sum);

    exit(EXIT_SUCCESS);
}
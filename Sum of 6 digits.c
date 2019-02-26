#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=6;i++){
        sum += num%10;
        num /= 10;
    }
    
    while (sum > 9){
        num = sum;
        sum = 0;
        sum += num%10;
        num /= 10;
        sum += num;
    }
    printf("%d",sum);

    exit(EXIT_SUCCESS);
}
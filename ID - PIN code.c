#include <stdio.h>
#include <stdlib.h>

int main()
{   int a, b,sum1=0,sum2=0;
    scanf("%d %d",&a,&b);
    while(a>0){
     sum1+=a%10; 
     a/=10;
	}
    while(b>0){
     sum2+=b%10; 
     b/=10;
	}
	printf("%.2d%.2d",sum1,sum2);

    exit(EXIT_SUCCESS);
}
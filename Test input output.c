#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	x = abs(x);
	y = abs(y);	
	z = abs(z);
    printf("%d",x+y*z);
    exit(EXIT_SUCCESS);
    return 0;
}
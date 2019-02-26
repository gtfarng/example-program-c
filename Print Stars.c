#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,n,j;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
		for(j=1; j<=n; j++){
    		if(i==j || j+i==n+1 ) 
			  printf("*");
    		else printf(" ");
		}
		printf("\n");
    	
	}

    exit(EXIT_SUCCESS);
}
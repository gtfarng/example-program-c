#include <stdio.h>
#include <stdlib.h>

int main()
{  int i, n, j, k;
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
    	for(k=0,j=1; j<=n; j++){
    		if(j<n-i) 
    		printf(" "); 
			else 
			 printf("%d",++k); 
		} 
		for(j=i; j>0; j--){
    		printf("%d",j);
		}
		printf("\n");
    	
	}

    exit(EXIT_SUCCESS);
}
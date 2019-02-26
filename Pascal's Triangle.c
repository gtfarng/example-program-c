#include <stdio.h>
#include <stdlib.h>
int main()
{   int n,i,j;
    scanf("%d", &n);
    int a[n][n];
    a[0][0] = 1;
    for(i=1;i<n;i++){
    	for(j=0;j<=i;j++){
    	  if(j==0 || j==i ){
    	      a[i][j]=1;
    	  }
    	  else {
    	  	a[i][j]=a[i-1][j]+a[i-1][j-1];
		  }
		}
	}
    for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
		    printf(" %d",a[i][j]);
		}
		printf("\n");
	}

    exit(EXIT_SUCCESS);
}

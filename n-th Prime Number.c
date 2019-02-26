#include <stdio.h>
#include <stdlib.h>

int main()
{
    int check,i,j,n,p;
    scanf("%d",&n);
    i=1; j=2;
    while(i<n){
       j++;	
       for(check=2;check*check<=j; check++) {
           if(j%check==0)
           { 
               check=j; 
           }
       }
	   if(check<j)
	   {
	   	i++;
	   }
	   p=j;
	}
	printf("%d",p);

    exit(EXIT_SUCCESS);
}
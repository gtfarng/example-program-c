#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m;
    int fee = 0;
	scanf("%d %d",&h,&m);
	if (m > 30)
	    h++;
	if (h > 0)
	    {
	       if (h <= 4)
	        {
	           fee = 50;
	        }
	       else 
	       {
	           fee = (50 + (h-4) * 10);
	        }
	    }
	
	printf ("%d",fee);
 
    exit(EXIT_SUCCESS);
}
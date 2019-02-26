#include <stdio.h>
#include <stdlib.h>

int main()
{  int a=0,b=0,c=0,d=0,g1,g2,i;
    for(i=0;i<3;i++)
    {
        scanf("%d %d",&g1,&g2); // A : B
        if( i == 0 ){
            if(g1>g2)
                a+=3; 
	        else if (g1==g2){ 
	            a++; 
	            b++; 
	        }
	        else 
	            b+=3;
        }
        else if( i == 1)
        {
           if(g1>g2) 
               a+=3; 
	       else if (g1==g2){ 
	           a++; 
	           c++; 
	       }
	       else 
	           c+=3;
        }
        else if( i == 2)
        {
           if(g1>g2)
               b+=3; 
	       else if (g1==g2){
	           b++;
	           c++;
	       }
           else 
               c+=3;
        }
    }
	printf("A %d\n",a);
	printf("B %d\n",b);
	printf("C %d\n",c);

    exit(EXIT_SUCCESS);
}
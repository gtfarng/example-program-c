#include <stdio.h>
#include <stdlib.h>

int main()
{   float a,res;
    char op,c[50]={"Error: Division by zero\n"};
    scanf("%f",&a);
    scanf(" %c",&op);
    res = a;
    while (op=='+' || op=='-' || op=='*' || op=='/'){
    	scanf("%f",&a);
    	if(op=='+') res+=a;
    	else if(op=='-') res-=a;
    	else if(op=='*') res*=a;
    	else if(op=='/') {
    	  if(a!=0) res/=a;
    	  else {
		    res=0;
		    printf("%s",c);
		  }
		}
    	scanf(" %c",&op);
	}
	printf("%.4f",res);

    exit(EXIT_SUCCESS);
}

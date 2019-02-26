#include <stdio.h>
#include <stdlib.h>

int main()
{  char s[128];
int d = 0, n=0;
  gets(s);
  while(s[n] != '\0') {
  	 if(s[n]>='0' && s[n]<='9') {
	   s[n]='X'; d++;	
	 }
	 n++; 
  }
  printf("%d %d\n%s",d, n, s);

    exit(EXIT_SUCCESS);
}
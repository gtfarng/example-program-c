#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{  char str1[101], str2[101], str3[101];
    int i;
	gets(str1);
	strcpy(str2,str1);
	strcpy(str3,str1);

    for(i=0;i<=strlen(str1);i++)
	{

    	if(str1[i]>='a' && str1[i]<='z'){
    	    str2[i]=str1[i]+'A'-'a';
    	}
    	if(str1[i]>='A' && str1[i]<='Z'){
    	    str3[i]=str1[i]+'a'-'A';
    	}
	}
	printf("%s\n", str2);
	printf("%s\n", str3);

    exit(EXIT_SUCCESS);
}
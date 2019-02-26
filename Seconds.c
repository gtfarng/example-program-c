#include <stdio.h>
#include <stdlib.h>

int main()
{  int sec, day, hr, min;
 	scanf("%d", &sec);
 	hr = sec/3600;
 	
 	min = sec/60%60;
 	sec = sec%60;
 	printf("%d:%d:%d",hr,min,sec);

    exit(EXIT_SUCCESS);
}
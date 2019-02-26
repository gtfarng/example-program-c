#include <stdio.h>
#include <stdlib.h>

int main()
{
 int ndays, week, day ,y ,m ,x;
 scanf("%d", &ndays);
 y=ndays/365;
 x=ndays%365;
 m=x/30;
 x=x%30;
 week= x/7 ;
 day= x%7 ;
 printf(" %d %d %d %d ",y,m,week,day );
    exit(EXIT_SUCCESS);
}
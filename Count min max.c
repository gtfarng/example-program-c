#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,max,min,i=0;
    scanf("%d",&a);
    max = a;
    min = a;
    while(a!=0 && a>0){
        i++;
       if(max>a)
            max = a;
       if(min<a)
            min = a;
       
       scanf("%d",&a); 
    }
    printf("%d\n%d\n%d",i,max,min);
    exit(EXIT_SUCCESS);
}
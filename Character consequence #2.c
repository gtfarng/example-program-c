#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int b,i;
    scanf("%c %d",&a,&b);
    for(i=0;i<b;i++)
    {
        printf("%c ",a+i+'A'-'a');
    }
    
    exit(EXIT_SUCCESS);
}
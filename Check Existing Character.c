#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],b;
    int i = 0,d=-1;
    gets(a);
    scanf("%c",&b);
    for(i=0;i<strlen(a)-1;i++){
        if(a[i] == b)
        {
            d = i;
            break;
        }
    }
    printf("%d",d);

    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10],b[10];

    scanf("%s %s",&a,&b);
    strcat(a,"_");
    strcat(a,b);
    printf("%s",a);
    printf("\n%d",strlen(a));

    exit(EXIT_SUCCESS);
}
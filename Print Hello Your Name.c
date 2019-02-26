#include <stdio.h>
#include <stdlib.h>

int main()
{
     char a[30];
     printf("Hello ");
     gets(a);
     printf("\"%s\"",a);
    exit(EXIT_SUCCESS);
}
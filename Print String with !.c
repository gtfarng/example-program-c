#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    gets(a);
    printf("%s!",a);

    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b = (a/10000)-543;
    c = (a/100)%100;
    d = a%100;
    printf("%02d/%02d/%d",c,d,b);

    exit(EXIT_SUCCESS);
}
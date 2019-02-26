#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    scanf("%d\n",&a);
    char n[a];
    for(i=0;i<a;i++){
        scanf("%c",&n[i]);
        printf("%c",n[i]);
    }


    exit(EXIT_SUCCESS);
}
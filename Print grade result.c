#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    if( a == 'A')
        printf("Excellent");
    else if( a == 'B')
        printf("Good");
    else if( a == 'C')
        printf("Fair");
    else if( a == 'D')
        printf("Pass");
    else if( (a == 'E') || (a == 'F'))
        printf("Fail");
    else if( a == 'W')
        printf("Withdraw ");
    else
        printf("Unknown");

    exit(EXIT_SUCCESS);
}
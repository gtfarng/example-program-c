#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    if( a >= 'A' && a <= 'Z'){
        printf("Capital letter '%c'",a);
        
    }
    
    else if( a >= 'a' && a <= 'z'){
        printf("Small letter '%c'",a);
        
    }
    else if( a >= '0' && a <= '9'){
        printf("Digit '%c'",a);
        
    }
    else {
        printf("Special symbol '%c'",a);
        
    }
    exit(EXIT_SUCCESS);
}
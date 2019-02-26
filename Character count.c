#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int c = 0,l = 0,d = 0;
    do{
        
        scanf(" %c",&a);
        c++;
        if( (a >= 'A' && a <= 'Z') || ( a >= 'a' && a <= 'z')){
            l++;
        }
        if( a >= '0' && a <= '9'){
            d++;
        }
    }while (a != '#'); 
    printf("Count: %d\n",c);
    printf("Letter: %d\n",l);
    printf("Digit: %d",d);

    exit(EXIT_SUCCESS);
}
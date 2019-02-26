#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;
    scanf("%d",&a);
    b = a%8;
        if(b == 0){
            printf("A");
        }
        else if(b == 1){
            printf("B");
        }
        else if(b == 2){
            printf("C");
        }
        else if(b == 3){
            printf("D");
        }
        else if(b == 4){
            printf("E");
        }
        else if(b == 5){
            printf("F");
        }
        else if(b == 6){
            printf("G");
        }
        else if(b == 7){
            printf("H");
        }
    

    exit(EXIT_SUCCESS);
}
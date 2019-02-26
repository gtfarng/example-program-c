#include <stdio.h>
#include <stdlib.h>

int main()
{

    float w,h,b;
    scanf("%f %f",&w,&h);
    b = w/(h*h);
    printf("%.2f",b);
    
    exit(EXIT_SUCCESS);
}
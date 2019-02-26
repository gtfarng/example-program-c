#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n%5==0 && n%3==0){
        printf("FizzBuzz");
    }
    else if(n%5==0){
        printf("Buzz");
    }
    else if(n%3==0){
        printf("Fizz");
    }
    else{
        printf("Wow");
    }
   

    exit(EXIT_SUCCESS);
}
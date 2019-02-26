#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d ",n);
    while(1){
        if(n%2==0){
            n /=2;
            printf("%d ",n);
        }
        else{
            if(n == 1){
                break;
            }
            else{
                n = (3*n)+1;
                printf("%d ",n);
            }
        }
        
    }

    exit(EXIT_SUCCESS);
}
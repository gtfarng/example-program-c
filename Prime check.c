#include <stdio.h>
#include <stdlib.h>

int main()
{
    int check,x,y,n;
    scanf("%d",&n);
    if( n > 1){
        for(x=2;x<=n;x++)
        {
            check = 1;
            for(y=2;y<x;y++){
                if(!(x%y)){
                    check=0;
                }
            }
        }
    }
    else{
        check = 0;
        
    }
    printf("%d",check);

    exit(EXIT_SUCCESS);
}
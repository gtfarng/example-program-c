#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,max;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
        if( i== 0){
            max = num[0];
        }
        else{
            if(num[i]>max)
                max = num[i];
        }
    }
    printf("%d",max);
    
    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{  int F[50], n, i;
    scanf("%d",&n); 
    
    for(i=0;i<=n;i++){
        if(i==0){
            F[0]=0;
        }
        else if(i==1){
            F[1]=1;
        }
        else{
            F[i]=F[i-1]+F[i-2];
        }
    }
    for(i=n;i>=0;i--){
        printf("%d ",F[i]);
    }
    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i,c=0;
    scanf("%d",&n);
    int w[n];
    for(i=0;i<=n;i++){
        if(i==n){
            scanf("%d",&m);
        }
        else{
            scanf("%d",&w[i]);
        }
    }
    for(i=0;i<n;i++){
        if(w[i]==m){
            c=1;
        }
        else{
            c=0;
        }
    }
    if(c==1){
        printf("%d",m);
    }
    else{
        printf("Not found");
    }

    exit(EXIT_SUCCESS);
}
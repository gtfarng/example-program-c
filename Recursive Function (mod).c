#include <stdio.h>
#include <stdlib.h>
int rem(int a, int b)
{
    if( a == 0 || a < b){
        return a;
    }
    else{
        return rem(a-b,b);
    }
}
int main(){
    int p, q, r;
    scanf("%d%d",&p, &q);
    r=rem(p,q);
    printf("%d mod %d = %d\n", p, q, r);
    return 0;
}


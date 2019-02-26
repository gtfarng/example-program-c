#include <stdio.h>
#include <stdlib.h>
int fdiv(int a, int b){
    if( a == 0 || a < b){
        return 0;
    }
    else{
        return 1+fdiv(a-b,b);
    }
}
int main(){
    int p, q, d;
    scanf("%d%d",&p, &q);
    d=fdiv(p,q);
    printf("%d div %d = %d\n", p, q, d);
    return 0;
}

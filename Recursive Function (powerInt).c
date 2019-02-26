#include <stdio.h>
#include <stdlib.h>

int powerInt(int a, int n){
    if(n == 0){
        return 1;
    }
    else if (n > 0){
        return a*powerInt(a,n-1);
    }
}
int main()
{   int a, n;
    scanf("%d%d",&a, &n);
    printf("%d", powerInt(a, n) );
    return 0;
}

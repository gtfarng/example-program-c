#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int countFactor(int a, int x[ ], int n){
    int i,c=0;
    for(i=0; i<n; i++){
        if(a%x[i]==0){
            c++;
        }
    }
    return c;
}
int main( )
{ int nums[MAX], a, n, i, c;
    n=8;
    for(i=0; i<n; i++) scanf("%d", &nums[i]);
    scanf("%d",&a);
    c = countFactor(a, nums, n);
    printf("%d", c );
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int fmin(int x[], int n){
    int i,min;
    for(i=0; i<n; i++){
        if( i == 0)
            min = x[i];
        else{
            if( min > x[i])
                min = x[i];
        }
    }
    return min;

}
int main()
{  int nums[MAX], n, i;
    scanf("%d",&n);
    for(i=0; i<n; i++) scanf("%d", &nums[i]);
    printf("%d", fmin(nums,n) );
    return 0;
}


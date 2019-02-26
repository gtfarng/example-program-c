#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int fmax(int x[], int n){
    int i,max;
    for(i=0; i<n; i++){
        if( i == 0)
            max = x[i];
        else{
            if( max < x[i])
                max = x[i];
        }
    }
    return max;

}
int main()
{  int nums[MAX], n, i, mx;
    scanf("%d",&n);
    for(i=0; i<n; i++) scanf("%d", &nums[i]);
    mx = fmax(nums,n);
    printf("%d", mx );
    return 0;
}


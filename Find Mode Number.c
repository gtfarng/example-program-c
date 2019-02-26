#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    int maxValue = 0,maxCount = 0;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        int count=0;
        for (j=0;j<n;j++) {
            if (num[j] == num[i])
               count++;
	    }
	    if (count > maxCount) {
               maxCount = count;
               maxValue = num[i]; 
        }
    }
    printf("%d",maxValue);
    

    exit(EXIT_SUCCESS);
}
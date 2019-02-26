#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,i=4;
    char total[5];
    scanf("%d",&a);
    scanf("%d",&b);
    sum = a+b;
    while(sum>0){
        if(i>=0){
            total[i] = (sum%10)+'0';
            sum /= 10;
            i--;
        }
    }
    for(i=0;i<5;i++){
        if(i==4){
            printf("%c",total[i]);
        }  
        else{
            printf("%cX",total[i]);
        }
    }
    exit(EXIT_SUCCESS);
}
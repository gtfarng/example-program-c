#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    char a[500],b[500],c[500];
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i]-'0';
        printf("%c",c[i]);
        if(i<n-1){
            printf("X");
        }
    }

    exit(EXIT_SUCCESS);
}
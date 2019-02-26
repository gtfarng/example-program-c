#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(j>=n-i+1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}

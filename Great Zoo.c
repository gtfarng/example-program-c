#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    char a;
    while(1)
    {
        printf("Enter : ");
        scanf("%d",&n);
        int sum = 0;
        if(n>=1)
        {
            printf("Enter : ");
            for(i=1;i<=n*2;i++)
            {

                scanf("%c",&a);
                if(a == 'A')
                {
                    sum += 100;
                    printf("%d\n",sum);
                }
                else if(a == 'T')
                {
                    sum += 50;
                    printf("%d\n",sum);
                }
                else if(a == 'K')
                {
                    sum += 20;
                    printf("%d\n",sum);
                }
                else if(a == 'S')
                {
                    sum += 0;
                    printf("%d\n",sum);
                }
            }
            printf("Sum : %d\n",sum);
        }
        else if(n<=0){
            break;
        }
    }
    exit(EXIT_SUCCESS);
}

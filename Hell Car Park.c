#include <stdio.h>
#include <stdlib.h>
#define r 3
#define c 10
int main()
{
    int loop =1,i,j;
    int park[r][c] = {0};
    int free[r] = {c,c,c};
    int x=0,y=0;
    char sym;
    char code[r] = {'e','e','e'};
    do
    {
        for(i=0; i<r; i++)
        {
            printf("r%d : ",i+1);
            for(j=0; j<c; j++)
            {
                if(park[i][j])
                    printf("x");
                else
                    printf("-");
            }
            printf(" : %c", code[i]);
            printf("\n");
        }
        printf("park at : ");
        scanf("%d %d %c", &x, &y, &sym);
        if (park[x-1][y-1]==1 && sym=='+')
            printf("error!\n");
        else if (sym == '+')
            park[x-1][y-1] = 1;
        else if(sym == '-')
            park[x-1][y-1] = 0;
        else break;
        for(i=0; i<r; i++)
        {
            free[i]=10;
            for(j=0; j<c; j++)
            {
                free[i]-=park[i][j];
            }
        }
        for(i=0; i<r; i++)
        {
            printf("r%d:free=%d\n",i+1,free[i]);
        }
        for(i=0; i<r; i++)
        {
            if(free[i]==10)
                code[i]='e';
            else if(free[i]==0)
                code[i]='f';
            else
                code[i]='a';
        }
    }
    while (loop);

    exit(EXIT_SUCCESS);
}

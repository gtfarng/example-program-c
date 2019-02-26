#include <stdio.h>
#include <stdlib.h>
#define r 10
#define c 10
int main()
{
    int s,row,cow;;
    int loop =1,i,j;
    int movie[r][c] = {0};
    int x=0,y=0;
    do
    {
        printf("Reservations 1\n");
        printf("Show seat 2\n");
        printf("Enter : ");
        scanf("%d",&s);
        if( s == 2 )
        {
            for(i=0; i<r; i++)
            {
                for(j=0; j<c; j++)
                {

                    if(movie[i][j])
                        printf("*");
                    else
                        printf("-");
                }
                printf("\n");
            }

        }
        else if( s == 1)
        {

            while(1){
                printf("Enter Row : ");
                scanf("%d",&row);
                printf("Enter Cow : ");
                scanf("%d",&cow);
                if(movie[row-1][cow-1] == 1)
                {
                    printf("Reserved\n");
                    printf("Please Enter Row and Cow Again\n");
                }
                else if(movie[row-1][cow-1] == 0)
                {
                    movie[row-1][cow-1] = 1;
                    printf("Reserved Success");
                    break;
                }
            }
        }
    }
    while (1);

    exit(EXIT_SUCCESS);
}

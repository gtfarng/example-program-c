#include<stdio.h>
int main ()
{
    int num;
    int i,j;

    scanf("%d",&num);

    for (i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {

                          if(j<num-i)
                          printf("%c",65+j);
                          else
                          printf(" ");


        }
        for(j=1;j<num;j++)
        {
                          if(j<i)
                         printf(" ");
                          else
                          printf("%c",65+num-j-1);
        }
        printf("\n");
    }
    for (i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
                           if(i>=j)
                          printf("%c",65+j);
                          else
                          printf(" ");
         }

        for(j=(num-2);j>=0;j--)
        {
                        if(i<j)
                         printf(" ");
                        else
                         printf("%c",65+j);

        }
        printf("\n");
    }



getch ();
return 0;
}


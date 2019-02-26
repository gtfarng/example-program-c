#include<stdio.h>
int main()
{
    int i,j,n,o;
    printf ("Number : ");
    scanf ("%d",&n);
    printf ("\n\n");
    for (i=0;i<n;i++)
    {
        //top left
        for (j=0;j<n-i;j++)
        {
            printf ("%c",65+j);
        }
        for (j=0;j<i;j++)
        {
            printf (" ");
        }
        //top right
        for (j=0;j<i;j++)
        {
            printf (" ");
        }
        for (o=0;o<n-i;o++)
        {
            printf ("%c",65+(o+i));
        }
        printf ("\n");
    }

    for (i=0;i<n;i++)
    {
        //bottom left
        for (j=0;j<i+1;j++)
        {
            printf ("%c",65+j);
        }
        for (j=1;j<n-i;j++)
        {
            printf (" ");
        }
        //bottom right
        for (j=1;j<n-i;j++)
        {
            printf (" ");
        }
        for (j=0;j<i+1;j++)
        {
            printf ("%c",65+j);
        }
        printf ("\n");
    }
    getch ();
    return 0;
}

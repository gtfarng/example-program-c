#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tem ;
    scanf ("%d",&tem);
    if (tem > 25)
    {
        printf ("\"Hot\"");
    }
    else if (tem == 25)
    {
        printf ("\"Normal\"");
    }
    else 
    {
        printf ("\"Cold\"");
    }

    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day;
    scanf("%d",&day);
    if(day%7 == 0)
    {
        printf("Saturday");
    }
    else if(day%7 == 1)
    {
        printf("Sunday");
    }
    else if(day%7 == 2)
    {
        printf("Monday");
    }
    else if(day%7 == 3)
    {
        printf("Tuesday");
    }
    else if(day%7 == 4)
    {
        printf("Wednesday");
    }
     else if(day%7 == 5)
    {
        printf("Thursday");
    }
    else if(day%7 == 6)
    {
        printf("Friday");
    }
    exit(EXIT_SUCCESS);
}
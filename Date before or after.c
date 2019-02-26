#include <stdio.h>
struct date
{  int day;  int month; int year;  };
int main()
{  struct date d1, d2;
    scanf("%d/%d/%d",&d1.day, &d1.month, &d1.year);
    scanf("%d/%d/%d",&d2.day, &d2.month, &d2.year);

    if( d1.year>d2.year ||
        (d1.year==d2.year && d1.month>d2.month ) ||
        (d1.year==d2.year && d1.month==d2.month && d1.day>d1.day ))
        printf("d1 after d2");

    else if ( d1.year<d2.year ||
              (d1.year==d2.year && d1.month<d2.month ) ||
              (d1.year==d2.year && d1.month==d2.month && d1.day<d1.day ))
        printf("d1 before d2");

    else
        printf("Same date");
    return 0;
}

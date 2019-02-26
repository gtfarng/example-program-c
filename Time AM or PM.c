#include <stdio.h>
#include <stdlib.h>

int main()
{  int hr,mn;
    scanf("%d:%d", &hr, &mn);
     if(hr>=24 || mn>=60 ){
         printf("Invalid time\n");
     }else if (hr<1)
     {
         printf("12:%.2d a.m.",mn);
     }else if (hr<12)
     {
         printf("%.2d:%.2d a.m.",hr,mn);
     }else if (hr>12)
     {
         printf("%.2d:%.2d p.m.",hr%12,mn);
     }else if (hr==12)
     {
         printf("12:%.2d p.m.",mn);
     }
      

    exit(EXIT_SUCCESS);
}
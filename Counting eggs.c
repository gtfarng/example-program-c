#include <stdio.h>
#include <stdlib.h>
#define N 4

int main()
{  int  M[10][7], i, j, dy[7]={0}, wk[10]={0};
   char day[7][15]={"Monday", "Tuesday", "Wednesday","Thursday",
                 "Friday", "Saturday", "Sunday" };
   for(i=0;i<N;i++){
        for(j=0;j<7;j++){
            scanf("%d",&M[i][j]);
        }
   }
   for(i=0;i<N;i++){  
       for(j=0; j<7; j++){
   	        wk[i]+=M[i][j];
   	        dy[j]+=M[i][j];
	   }
   }	  
   
   for(i=0;i<N;i++){
        printf("Week %d: %d\n",i+1, wk[i]);
   }
   j=0;
   for(i=1;i<7;i++){
     if(dy[i]>dy[j]){ 
        j=i;
     }
   }
    printf("Max day: %s %d ",day[j], dy[j]);

    exit(EXIT_SUCCESS);
}
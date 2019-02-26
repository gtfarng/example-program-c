#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[10],i,min,max,pass=0;
    float avg =0;
    for(i=0;i<10;i++){
        scanf("%d",&s[i]);
        avg += s[i];
        if(i==0){
            min = s[i];
            max = s[i];
        }
        else{
            if(s[i]>max)
                max = s[i];
            else if(s[i]<min)
                min = s[i];
                
        }
    }
    avg /= 10;
    for(i=0;i<10;i++){
        if(s[i]>avg)
            pass++;
    }
    printf("Min: %d\n",min);
    printf("Max: %d\n",max);
    printf("Average: %.2f\n",avg);
    printf("Pass: %d\n",pass);

    exit(EXIT_SUCCESS);
}
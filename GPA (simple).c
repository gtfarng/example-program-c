#include <stdio.h>
#include <stdlib.h>

int main()
{   int a[5],c[5],i,sumC = 0;
    float sum = 0;
    char b[5];
    for(i=0;i<5;i++)
        scanf("%d %c",&a[i],&b[i]);
    for(i=0;i<5;i++)
    {
        if(b[i] == 'A'){
            c[i] = a[i]*4;
        }
        else if(b[i] == 'B'){
            c[i] = a[i]*3;
        }
        else if(b[i] == 'C'){
            c[i] = a[i]*2;
        }
        else if(b[i] == 'D'){
            c[i] = a[i]*1;
        }
        else if(b[i] == 'E'){
            c[i] = a[i]*0;
        }
        sumC += a[i];
        sum += c[i];
    }
    printf("%.2f",sum/sumC);

    exit(EXIT_SUCCESS);
}
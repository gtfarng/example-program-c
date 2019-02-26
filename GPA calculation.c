#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float gpa=0,gad=0,cd=0,cr;
    char c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %c",&cr,&c);
        cd+=cr;
        gad += cr*('E'-c);
            
    }
    
    gpa = gad/cd;
    printf("%.2f",gpa);

    exit(EXIT_SUCCESS);
}
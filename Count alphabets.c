#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[100];
    int F=0,U=0,K=0,C=0,i=0;
    gets(n);
    while(n[i] != '\0'){
        
        if(n[i] == 'F')
            F++;
        if(n[i] == 'U')
            U++;
        if(n[i] == 'K')
            K++;
        if(n[i] == 'C')
            C++;
        i++;
        
    }
    printf("F:%d\n",F);
    printf("U:%d\n",U);
    printf("K:%d\n",K);
    printf("C:%d",C);

    exit(EXIT_SUCCESS);
}
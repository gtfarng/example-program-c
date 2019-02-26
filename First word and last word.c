#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num,i,j;
    scanf("%d",&num);
    char s[num][20],first[20],last[20];
    for(i=0;i<num;i++){
        scanf("%s",s[i]);
    }
    strcpy(first,s[0]);
    strcpy(last,s[0]);
    for(i=1;i<num;i++){
        if(strcmp(s[i],first)<0){
            strcpy(first,s[i]);
        }
        if(strcmp(s[i],last)>0){
            strcpy(last,s[i]);
        }
    }
    printf("%s %s",first,last);

    exit(EXIT_SUCCESS);
}

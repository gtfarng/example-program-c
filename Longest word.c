#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num,i,j,strmax;
    scanf("%d",&num);
    char s[num][20],first[20],last[20];
    for(i=0;i<num;i++){
        scanf("%s",s[i]);
    }
    strmax = strlen(s[0]);
    for(i=0;i<num;i++){
        if(strlen(s[i]) > strmax){
            strmax = strlen(s[i]);
        }
    }
    strcpy(last,s[0]);
    for(i=0;i<num;i++){
        if(strcmp(s[i],last)>0 && strlen(s[i]) == strmax){
            strcpy(last,s[i]);
        }
    }
    printf("%s",last);

    exit(EXIT_SUCCESS);
}

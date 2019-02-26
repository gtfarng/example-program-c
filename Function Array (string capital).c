#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capitalize(char str[]){
    int size,i;
    size = strlen(str);
    for(i=0;i<size;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]+'A'-'a';
        }
    }
}

int main()
{  char message[100];
    gets(message);
    capitalize(message);
    printf("%s", message);
    return 0;
}


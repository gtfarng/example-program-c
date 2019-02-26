#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void lower(char str[]){
    int size,i;
    size = strlen(str);
    for(i=0;i<size;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]-'A'+'a';
        }
    }
}

int main()
{  char message[100];
    gets(message);
    lower(message);
    printf("%s", message);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void hideDigits(char str[]){
    int i;
    for(i=0;i<strlen(str);i++){
        if(str[i]>='0'&&str[i]<='9'){
            str[i] = 'X';
        }
    }
}
int main()
{  char message[100];
    gets(message);
    hideDigits(message);
    printf("%s", message);
    return 0;
}


#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
  char text[50];
  printf("Enter a string ");
  gets(text);
  int i;
  printf("Reverse string ");
  for(i=strlen(text)-1;i>=0;i--){
    printf("%c",text[i]);
  }
  exit(EXIT_SUCCESS);
}

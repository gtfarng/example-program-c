#include <stdio.h>
#include <stdlib.h>

int main()
{
 int value[4][3];
 int i,j,max;
 for(i=0;i<4;i++){
   for(j=0;j<3;j++){
     scanf("%d",value[i][j]);
   }
 }
 max = MaxValue(value);
 print(max);
    exit(EXIT_SUCCESS);
}
int MaxValue (int Matrix[4][3]){
  int i,j,max;
  max = Matrix[0][0];
  for(i=0;i<4;i++){
    for(j=0;j<3;j++){
      if(max < Matrix[i][i]){
        max = Matrix[i][j];
      }
    }
  }
  return max;
}
void print(int max){
  printf("%d",max);
}

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j;
    scanf("%d",&n);
    int a [n][n];
    int determinant=0;
    if (n!=2 && n!=3) {
   	    printf("Matrix 2x2 or 3x3 only\n"); 
   	    return 1;
    }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
    if(n==3){
        for(i=0;i<n;i++){
            determinant += (a[0][i]*(a[1][(i+1)%n]*a[2][(i+2)%n] - a[1][(i+2)%n]*a[2][(i+1)%n]));
        }
    }
    if(n==2){
        determinant = a[0][0]*a[1][1] - a[1][0]*a[0][1];
    }
      
    printf("%d",determinant);
    exit(EXIT_SUCCESS);
}
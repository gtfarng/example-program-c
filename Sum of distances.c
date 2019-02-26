#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input[3][2],i,j;

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",&input[i][j]);
        }
    }
    float distance = 0;
    for(i=0;i<3;i++){
        if( i==(i-1)){
            distance += sqrt(pow((input[i-i][0]-input[i][0]),2)+pow((input[i-i][1]-input[i][1]),2));
        }
        else{
            distance += sqrt(pow((input[i][0]-input[i+1][0]),2)+pow((input[i][1]-input[i+1][1]),2));
        }
    }
    printf("%.4f",distance);

    exit(EXIT_SUCCESS);
}

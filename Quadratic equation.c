#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float solution,x,xp,xm;
    solution = pow(b,2)-(4*a*c);
    if (solution == 0){
        x = ((b*-1)+sqrt(solution))/(2*a);
        printf("%.5f",x);
    }
    else if (solution > 0){
        xp = ((b*-1)+sqrt(solution))/(2*a);
        xm = ((b*-1)-sqrt(solution))/(2*a);
        printf("%.5f   %.5f",xp,xm);
    }
    else if (solution < 0){
        printf("No solution");
    }

    exit(EXIT_SUCCESS);
}

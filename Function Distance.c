#include <stdio.h>
#include <stdlib.h>
float distance (int x1, int y1, int x2, int y2){
    float d = 0.0;
    d += sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return d;
}
int main()
{
    int x1, y1, x2, y2, n, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        printf("%.2f\n", distance(x1,y1,x2,y2)  );

    }
    exit(EXIT_SUCCESS);
}

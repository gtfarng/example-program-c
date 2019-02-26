#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float area(float a,float b,float c,float S){
    return sqrt(S*(S-a)*(S-b)*(S-c));
}
float s(float a,float b,float c){
    return (a+b+c)/2;
}
int main()
{
    float a,b,c,S,Area;
    scanf("%f %f %f",&a,&b,&c);
    S = s(a,b,c);
    Area = area(a,b,c,S);
    printf("%.4f",Area);

    exit(EXIT_SUCCESS);
}

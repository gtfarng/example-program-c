#include <stdio.h>
#include <math.h>
int     isTriangle(int a, int b, int c){
    int i,max,sum = 0,t;
    int tri[3] = {a,b,c};
    max = tri[0];
    for(i = 0;i<3;i++){
        if (max < tri[i]){
            max = tri[i];
        }
    }
    for ( i = 0 ; i <3 ; i++) {
        if( tri[i] != max){
            sum += tri[i];
        }
    }
    if (max < sum)
        t=1;
    else if (a == b && a == c && b == c)
        t=1;
    else
        t=0;
    return t;
}
float  triangleArea(int a, int b, int c){
    float s,area;
    s = (a+b+c)*0.5;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main(){
    int a, b, c;
    scanf("%d%d%d",&a, &b, &c);
    if( isTriangle(a,b,c)==1 )
        printf("%.4f",  triangleArea(a,b,c) );
    else
        printf("NOT Triangle!");
    return 0;
}
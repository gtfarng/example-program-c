#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14159
float area(int r){
    float a;
    a = Pi*pow(r,2);
    return a;
}
float circum(int r){
    float c;
    c=2*Pi*r;
    return c;
}
float volume(int r){
    float v;
    v = (4*Pi*pow(r,3))/3;
    return v;
}
float surface(int r){
    float s;
    s = 4*Pi*pow(r,2);
    return s;
}
int main(){
    int r;
    scanf("%d", &r);
    printf("Circle Circumference: %.4f\n", circum(r) );
    printf("Circle Area: %.4f\n", area(r) );
    printf("Sphere Volume: %.4f\n", volume(r) );
    printf("Sphere Surface: %.4f", surface(r) );
    return 0;
}
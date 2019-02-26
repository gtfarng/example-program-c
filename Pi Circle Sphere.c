#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float Circumference(float r){
  float c;
  c=2*M_PI*r;
  return c;
}
float Area(float r){
  float a;
  a = M_PI*pow(r,2);
  return a;
}
float Volume(float r){
  float v;
  v = (4*M_PI*pow(r,2))/3;
  return v;
}
float Surface(float r){
  float s;
  s = 4*M_PI*pow(r,2);
  return s;
}
void print(float pi,float c,float a,float v,float s){
  printf("M_PI= %.10f\n",pi);
  printf("Circle Circumference : %.4f\n",c);
  printf("Circle Area : %.4f\n",a);
  printf("Sphere Volume : %.4f\n",v);
  printf("Sphere Surface : %.4f\n",s);
}
int main()
{
  float c,a,v,s,r;
  scanf("%d",&r);
  c = Circumference(r);
  a = Area(r);
  v = Volume(r);
  s = Surface(r);
  print(M_PI,c,a,v,s);
  exit(EXIT_SUCCESS);
}

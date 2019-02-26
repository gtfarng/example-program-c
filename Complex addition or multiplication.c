#include <stdio.h>
#include <stdlib.h>

typedef struct
{   int real;
    int imag;
}ComplexNum;

int main()
{
    ComplexNum z1, z2, z3, z4;
    scanf("%d%d",&z1.real, &z1.imag);
    scanf("%d%d",&z2.real, &z2.imag);
    z3.real = z1.real + z2.real;
    z3.imag = z1.imag + z2.imag;
    z4.real = (z1.real * z2.real) - (z1.imag * z2.imag);
    z4.imag = (z1.real * z2.imag) + (z1.imag * z2.real);
    printf("z1 + z2 = %d + %di\n",z3.real,z3.imag);
    printf("z1 x z2 = %d + %di\n",z4.real,z4.imag);
    return 0;
}


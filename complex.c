#include <stdio.h>

struct complex {
    double real, imag;
};

typedef struct complex complex;

complex add(complex z1, complex z2)
{
    complex z3;
    z3.real = z1.real + z2.real;
    z3.imag = z1.imag + z2.imag;
    return z3;
}

complex diff(complex z1, complex z2)
{
    complex z3;
    z3.real = z1.real - z2.real;
    z3.imag = z1.imag - z2.imag;
    return z3;
}

complex conjugate(complex z)
{
    complex conjgt;
    conjgt.real = z.real;
    conjgt.imag = -z.imag;
    return conjgt;
}

void pcomplx(complex z)
{
    printf("%f + i%f\n", z.real, z.imag);
}

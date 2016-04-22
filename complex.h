#ifndef complex_h
#define complex_h

struct complex {
    double real, imag;
}

typedef struct complex complex;

complex add(complex z1, complex z2);
complex diff(complex z1, complex z2);
complex conjugate(complex z);
void pcomplx(complex z);

#endif

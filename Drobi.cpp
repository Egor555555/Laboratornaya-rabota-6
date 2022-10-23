#include "Drobi.h"
#include <iostream>
#include <cmath>

int NOD(int a, int b)
{
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void sokr(int* a, int* b)
{
    int x = NOD(*a, *b);
    *a /= x;
    *b /= x;
}

void sub(int* a, int* b, int* c, int* d)
{
    *a = *a * *d - *c * *b;
    *b = *b * *d;
}

void mult(int* a, int* b, int e, int f)
{
    *a = *a * e;
    *b = *b * f;
}

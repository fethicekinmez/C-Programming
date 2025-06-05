#include <stdlib.h>
#include <stdio.h>

int main() {

    int a1 = 10;
    int a2, a3;
    unsigned int b = 20;
    long c = 30;
    unsigned long d = 40;
    long long e = 50;
    unsigned long long f = 60;

    printf("a1 = %d, size: %lu\n", a1, sizeof(a1));
    printf("b = %u, size: %lu\n\n", b, sizeof(b));

    printf("c = %ld, size: %lu\n", c, sizeof(c));
    printf("d = %lu, size: %lu\n", d, sizeof(d));
    printf("e = %lld, size: %lu\n", e, sizeof(e));
    printf("f = %llu, size: %lu\n", f, sizeof(f));

    a2 = a3 = 99;

    return 0;
}
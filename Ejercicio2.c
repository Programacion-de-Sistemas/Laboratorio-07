#include <stdio.h>
int mult_ok(int x, int y) {
    int p = x*y;
    /* x es 0, o dividir p por x = y */
    return p;
}
int main() {
    int n = mult_ok(2147483647, 2);
    printf ("%i\n", n);
}
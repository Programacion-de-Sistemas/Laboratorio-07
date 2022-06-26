#include <stdio.h>
int mult_ok(long x, long y) {
    long aux = 1;
    if(x>0 && y>0){
        while(x>0 || aux>y){
            x = x*2;
            aux = aux*2;
            printf ("%lu\n", aux);
        }
    }
    return aux < y;

   
}
int main() {
    long n = mult_ok(429496729, 2);
    printf ("%lu\n", n);
}
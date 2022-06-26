#include <stdio.h>
#include <stdint.h>
int mult_ok(int64_t x, int64_t y) {
    int64_t aux = 1;
    if(x>0 && y>0){
        while(x>0 && aux<y){
            x = x*2;
            aux = aux*2;
            printf ("%ld\n", (long)aux);
        }
    }
    return aux < y;

   
}
int main() {
    int64_t n = mult_ok(429496729, 2);
    printf ("%ld\n", (long)n);
}
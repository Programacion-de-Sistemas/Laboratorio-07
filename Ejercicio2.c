#include <stdio.h>
#include <stdint.h>
int mult_ok(int64_t x, int64_t y) {
    int64_t contadorx = 1;
    int64_t contadory = 1;
    int64_t auxx = 1;
    int64_t auxy = 1;
    while(auxx <= x){
        auxx = auxx*2;
        contadorx = contadorx + 1;
    }
     while(auxy <= y){
        auxy = auxy*2;
        contadory = contadory + 1;
    }
    
    return (contadorx+contadory) < 64;

   
}
int main() {
    int64_t n = mult_ok(9223372036854775, 5);
    int64_t ex = 9223372036854775807;
    printf ("%ld\n", (long)n);
    printf ("%ld\n", (long)ex);

}
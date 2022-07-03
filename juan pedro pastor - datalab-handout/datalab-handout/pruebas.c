#include <stdio.h>
int bitXor(int x, int y) {
    printf("%i\n",~x);
    
  return ~(~(~x & y) & ~(x & ~y));
}
int main(){
    bitXor(4,5);
}
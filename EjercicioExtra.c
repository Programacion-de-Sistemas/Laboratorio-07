#include <stdio.h>
int add_ok(int x, int y) {
    int p = x+y;
    return !x || p-x == y;
}
int main() {
    int x = 1000000;
    int y = 5000000;
    if(add_ok(x,y) == 0){
        printf("overflow");
    }
    else{
        int res = x+y;
        printf ("%i\n", res);
    }
  

}

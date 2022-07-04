#include <stdio.h>
int tmin(void) {
  printf("%i\n",1<<31);
  return 1<<31;

}
int main(){
    tmin();
}
#include <stdio.h>
int bis(int x, int m){
    int[] listax = new int[32];
        for(int i = 0; i < 32; i++){
            listax[i]=0;
        }
    return bisn(x, m, listax, 31);
}    
int bisn(int x, int m, int[] lista, int contador){
    if(x != 1 && y != 1){
        int bitx = x%2;
        int bitm = m%2;
        int res;
        if(bitm == 1){
            res = 1;
        } 
        else{
            res = bitx
        }
        bisn(x/2, m/2, lista, contador);
        lista[contador] = res;
        printf("lista" + "%i %i" + contador, res)
        contador--;
        
    }

}
int bic(int x, int m);
/* Calcular x|y usando solo llamadas a las funciones bis y bic */
int bool_or(int x, int y) {
    int resultado = __________ ;
    return resultado;
}
int bool_xor(int x, int y) {
    int resultado = __________;
    return resultado;
}
int main(){
    bis(7,9)
}
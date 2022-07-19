//Q09 - Imprimir endereço de cada posição de uma matriz

#include <stdio.h>

void main(){
    float v[3][3];
    int i, j;

    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d\n", &v[i][j]);
        }
    }
}
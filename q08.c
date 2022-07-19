//Q08 - Imprimir endereço de cada posição de um vetor

#include <stdio.h>

void main(){
    float v[10];
    int i;

    for(i=0;i<10;i++){
        printf("%d\n", &v[i]);
    }
}
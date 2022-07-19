//Q05 - Ordenar variáveis (primeira Maior | segunda Menor)

#include <stdio.h>

void ordenarVariaveis(int *pt1, int *pt2){
    int aux = *pt1;

    if((*pt1) < (*pt2)){
        *pt1 = *pt2;
        *pt2 = aux;
    }
}

void main() {
    int v1, v2;

    printf("Valor da primeira variável: ");
    scanf("%d", &v1);

    printf("Valor da segunda variável: ");
    scanf("%d", &v2);

    ordenarVariaveis(&v1,&v2);

    printf("\nValor da primeira variável: %d\nValor da segunda variável: %d\n", v1, v2);
}
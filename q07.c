//Q07 - Função de soma de variáveis, sem retorno

#include <stdio.h>

void somarValores(int *pta, int *ptb){
    *pta += *ptb;
}

void main(){
    int a, b, soma;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    somarValores(&a, &b);

    printf("\nValor A: %d\nValor B: %d\n", a, b);
}
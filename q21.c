//Q21 - Alterar valores de um vetor através de um ponteiro

#include <stdio.h>

void main() {
    int vetor[5];
    int *pt = &vetor;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o valor do elemento %d do vetor: ", i);
        scanf("%d",&vetor[i]);
    }
    
    for (i = 0; i < 5; i++) {
        (*(pt+i))++;
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("Valor da posição %d do vetor: %d\n", i, vetor[i]);
    }
}
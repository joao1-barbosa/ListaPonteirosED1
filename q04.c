//Q04 - Alternar valor de variáveis através de uma função

#include <stdio.h>

void alternarValor(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

void main() {
    int a, b;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    alternarValor(&a, &b);

    printf("\nValor A: %d\nValor B: %d\n", a, b);

}
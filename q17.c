//Q17 - Função que separa parte inteira e parte fracional de um número real

#include <stdio.h>

void frac(float num, int* inteiro, float* frac){
    *inteiro = (int) num;
    *frac = num - (*inteiro);
}

void main(){
    int inteiro = 0;
    float decimal= 0;
    float numero;

    printf("Insira um número real: ");
    scanf("%f", &numero);

    frac(numero, &inteiro, &decimal);

    printf("\nParte Inteira: %d", inteiro);
    printf("\nParte Fracional: %f\n", decimal);
}

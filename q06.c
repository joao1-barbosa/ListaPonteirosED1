//Q06 - Função que retorna a soma do dobro das variáveis lidas
//Obs: Cada variável deve armazenar seu próprio valor dobrado

#include <stdio.h>

int somaDoDobro(int *pta, int *ptb){
    *pta += *pta;
    *ptb += *ptb;

    return ((*pta)+(*ptb));
}

void main(){
    int a, b, soma;

    printf("Valor de A: ");
    scanf("%d", &a);

    printf("Valor de B: ");
    scanf("%d", &b);

    soma = somaDoDobro(&a, &b);

    printf("\nValor A: %d\nValor B: %d\nSoma: %d\n", a, b, soma);
}
//Q03 - Imprime o valor da variável que possue o maior endereço

#include <stdio.h>

void main(){
    int i, j;
    int *pt;

    printf("Valor 1: ");
    scanf("%d", &i);

    printf("Valor 2: ");
    scanf("%d", &j);

    if((&i)>(&j)){
        pt = &i;
    }else{  
        pt = &j;
    }

    printf("\nValor da variável com maior endereço: %d\n", *pt);

}
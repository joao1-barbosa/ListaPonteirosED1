//Q19 - Função para encontrar maior valor de um vetor e quantas vezes ele se repete no mesmo

#include <stdio.h>

void maiorElementoVetor(int *vetor, int *valor, int *quant){
    int i;

    *valor = *vetor;

    for(i=1; i<10; i++){
        if(*(vetor+i) > *(vetor+(i-1))){
            *valor = *(vetor+i);
        }
    }

    for(i=1; i<10; i++){
        if (*(vetor+i) == *valor){
            (*quant)++;
        }
    }
}

void main(){
    int vetor[10];
    int valor;
    int quant = 0;
    int i;

    printf("Insira os valores do vetor: ");
    for(i=0; i<10; i++){
        scanf("%d",(vetor+i));
    }

    maiorElementoVetor(vetor, &valor, &quant);

    printf("\n\nMaior valor: %d",valor);
    printf("\nN. de aparições: %d\n",quant);
}
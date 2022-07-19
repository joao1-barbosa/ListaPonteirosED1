//Q15 - Função para imprimir vetor utilizando aritmética de ponteiros

#include<stdio.h>

void imprimirVetor(int *v){
    int i;

    for(i=0; i<5; i++){
        printf("Posição %d: %d\n", i, *(v+i));
    }
}


void main(){
    int vetor[5];
    int i;

    printf("Preencha o vetor de inteiros: ");

    for(i=0;i<5;i++){
        scanf("%d",&(*(vetor+i)));
    }

    printf("\n\n");

    imprimirVetor(vetor);
}
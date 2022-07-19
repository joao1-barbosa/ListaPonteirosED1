//Q14 - Função para preencher vetor utilizando aritmética de ponteiros

#include<stdio.h>

void preencherVetor(int *v, int valor){
    int i;

    for(i=0;i<10;i++){
        *(v+i) = valor;
    }
}

void main(){
    int vetor[10];
    int valor, i;

    printf("Insira o valor para preencher o vetor: ");
    scanf("%d",&valor);

    preencherVetor(vetor, valor);

    printf("\nValor no vetor:\n");
    for(i=0;i<10;i++){
        printf("Posição %d: %d\n",i,*(vetor+i));
    }

}
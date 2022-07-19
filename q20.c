//Q20 - Quantidade de números negativos em um vetor

#include <stdio.h>

int negativos(float *vet, int n){
    int cont, i;

    for(i=0; i<n; i++){
        if(*(vet+i) < 0) cont++;
    }

    return cont;
}

void main(){
    int tam;
    int i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam);

    float vetor[tam];

    for (i=0;i<tam;i++){
        printf("Digite o valor do elemento %d do vetor: ", i);
        scanf("%f",&vetor[i]);
    }

    printf("\n\nO vetor possui %d números negativos!\n", negativos(vetor, tam));
}
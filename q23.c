//Q23 - Encontrar maior valor de um vetor e imprimir um número predefinido de valores do vetor por linha

#include <stdio.h>

void maiorElementoVetor(int *vetor, int tamanho, int *maior_valor){
    int i;

    *maior_valor = vetor[0];

    for(i=1; i<tamanho; i++){
        if(*(vetor+i) > *(vetor+(i-1))){
            *maior_valor = *(vetor+i);
        }
    }
}

void main(){
    int n,i;

    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    printf("\n");
    
    int vetor[n];
    int maior_valor;

    for(i = 0; i < n; i++){
        printf("Digite o Valor da posição %d do vetor: ", i);
        scanf("%d", &vetor[i]);
    }
    
    int k;
    printf("\nDigite o numeros de elementos que devem aparecer em cada linha: ");
    scanf("%d", &k);

    i = 0;
    maiorElementoVetor(&vetor, n, &maior_valor);
    while (i < n){
        for(int j=0; j < k; j++){
            printf("%d   ", vetor[i]);
            i++;
        }
        printf("%d\n", maior_valor);

    }
    
}
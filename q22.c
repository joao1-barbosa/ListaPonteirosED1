//Q22 - Soma (elementos em posições iguais) de vetores com verificação de tamanho

#include<stdio.h>
#include<stdlib.h>

int tamanho(int *variavel){
    return ((sizeof(variavel))/sizeof(int));
}

int somaVetores(int *vetor1, int *vetor2, int *vetor_soma){ //se o tamanho de vetor1 e vetor2 forem diferentes, retorna 0, senão 1
    int i;
    
    if(1){
        for(i=0; i<1; i++){

        }

        return 1;
    }else{
        return 0;
    }
}

void main(){
    int vetor1[] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d\n", tamanho(vetor1));
    printf("%d\n", sizeof(vetor1)/sizeof(int));
}
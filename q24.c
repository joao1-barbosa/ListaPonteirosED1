//Q24 - Função que retorna o maior e menor valor de um vetor utilizando ponteiros

#include<stdio.h>

void maior_e_menor(int *vetor, int *maior, int *menor){
	int i = 0;
	
	*maior = *vetor;
	*menor = *vetor;
	
	for(i = 0; i < 10; i++){
		if(*(vetor+i) > *maior) *maior = *(vetor+i);
		if(*(vetor+i) < *menor) *menor = *(vetor+i);
	}
	
}

void main(){
	int vetor[10];
	int maior, menor, i;
	
	for(i =0; i < 10; i++){
		printf("Digite o valor para a posição %d do vetor: ", i);
		scanf("%d", &vetor[i]);
	}
	
	maior_e_menor(vetor, &maior, &menor);
	
	printf("\n\nO maior valor é %d!", maior);
	printf("\nO menor valor é %d!", menor);
}

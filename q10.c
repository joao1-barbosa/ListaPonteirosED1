//Q10 - Manipulação de vetor com aritimética de ponteiros

#include <stdio.h>

void main(){
    int v[5];
    int i;
    
    for(i=0;i<5;i++){
        printf("Valor da posição %d: ",i);
        scanf("%d",v+i);
    }

    printf("\nValores Dobrados\n");

    for(i=0;i<5;i++){
        printf("Posição %d: %d\n",i,2*(*v+i));
    }

}
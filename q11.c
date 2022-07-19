//Q11 - Imprimir endereços das posições do vetor com valores pares

#include<stdio.h>

void main(){
    int v[5];

     int i;
    
    for(i=0;i<5;i++){
        printf("Valor da posição %d: ",i);
        scanf("%d",&v[i]);
    }

    printf("\n\n");
    
    for(i=0;i<5;i++){
        if ((v[i]%2)== 0){
            printf("Endereço da Posição %d: %d\n",i, &v[i]);
        }
    }
}
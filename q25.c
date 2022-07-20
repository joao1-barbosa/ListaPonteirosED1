//Q25 - Função que ler e verifica se notas são válidas e outra que calula a média simples e ponderada

#include<stdio.h>
#include<stdlib.h>

void lerNotas(float *nota1, float *nota2){
    int cond=0; //condição para encerrar o laço
    
    while(cond != 1){
        printf("Digite a nota 1:");
        scanf("%f", nota1);

        if ((*nota1 < 0) || (*nota1 > 10)){
            system("clear"); //Limpar console (linux)
            printf("Nota Inválida!\n");
        }else{
            cond = 1;
        }
        
    }

    system("clear"); //Limpar console (linux)
    cond = 0;

    while(cond != 1){
        printf("Digite a nota 2:");
        scanf("%f", nota2);

        if ((*nota2 < 0) || (*nota2 > 10)){
            system("clear"); //Limpar console (linux)
            printf("Nota Inválida!\n");
        }else{
            cond = 1;
        }
        
    }

}

void calcularMedias(float *nota1, float *nota2, float *mediaSimples, float *mediaPonderada){
    *mediaSimples = ((*nota1) + (*nota2))/2;
    *mediaPonderada = ((*nota1) + 2*(*nota2))/3;
}

void main(){

    float nota1, nota2;
    lerNotas(&nota1, &nota2);

    float mediaSimples, mediaPonderada;
    calcularMedias(&nota1, &nota2, &mediaSimples, &mediaPonderada);

    system("clear"); //limpar console

    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n\n", nota2);

    printf("Media Simples: %.2f\n", mediaSimples);
    printf("Media Ponderada: %.2f\n", mediaPonderada);

}
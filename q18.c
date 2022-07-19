//Q18 - Função para calcular área superficial e volume de uma esfera

#include<stdio.h>

#define PI 3.141592653589793

void calc_esfera(float raio, float *area, float *volume){
    *volume = (4*PI*raio*raio*raio)/3;
    *area = 4*PI*raio*raio;
}

void main(){
    float raio;
    float area; 
    float volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("\n\nÁrea superficial: %.3f\n", area);
    printf("Volume: %.3f\n", volume);
}
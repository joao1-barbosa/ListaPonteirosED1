//Q26 - 

#include <stdio.h>
#include<stdlib.h>

int raizes(float a,float b,float c,float *x1,float *x2){//retorna número de raízes reais
    float delta = ((b*b)-(4*a*c));

    if(delta < 0) return 0;
    
    if(delta == 0){
        *x1 = ((-1)*b)/(2*a);
        *x2 = *x1; // delta == 0 implica que x1 == x2

        return 1;
    }

    if(delta > 0){
        *x1 = (((-1)*b)+delta)/(2*a);
        *x2 = (((-1)*b)-delta)/(2*a);

        return 2;
    }
}

void main(){
    float a, b, c, x1, x2;
    int nRaizes;

    printf("Para calcular o resultado da equação do tipo: ");
    printf("\n\tAx²+Bx+C\n");
    printf("Insira os valores de \n");

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    printf("C: ");
    scanf("%f", &c);

    nRaizes = raizes(a, b, c, &x1, &x2);
    system("clear"); //Limpar console

    if(nRaizes==0) printf("\n\nA equação não possui raízes!\n");
    if(nRaizes==1) printf("\n\nA equação possui 1 raíz!  \nX=%.2f\n", x1);
    if(nRaizes==2) printf("\n\nA equação possui 2 raízes!  \nX1=%.2f \tX2=%.2f\n", x1, x2);
}
//Q16 - Multiplos de uma variáveis usando ponteiros de ponteiros;

#include<stdio.h>

void main(){
    int a;
    int *b = &a; //Dobro de A
    int **c = &b; //Triplo de A
    int ***d = &c; //Quádruplo de A 

    printf("Insira o valor da variável A: ");
    scanf("%d",&a);

    printf("\n\n");

    printf("Valor Padrão (A): %d\n", a);
    printf("Valor Dobrado (B): %d\n", (*b)*2);
    printf("Valor Triplicado (C): %d\n", (**c)*3);
    printf("Valor Quadruplicado (D): %d\n", (***d)*4);
}
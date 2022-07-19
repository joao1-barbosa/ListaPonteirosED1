//Q12 - Função que ordena variáveis e retorna se eles são iguais

#include<stdio.h>

void inverteVariaveis(int *v1, int *v2){
    int aux;

    aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}

int ordenarVariaveis(int *a, int *b, int *c){
    int aux;

    if((*a == *b) && (*b == *c)){ //Se A = B e B = C, isso implica que A = C
        return 1;
    }else{
        while(!((*a<*b) && (*b<*c))){ //O laço irá se repetir até que A<B<C
            if(*a>*b) inverteVariaveis(a,b);
            if(*b>*c) inverteVariaveis(b,c);
        }
        return 0;
    }
}

void main(){
    int a, b, c;

    printf("Valor da variável A: ");
    scanf("%d", &a);

    printf("Valor da variável B: ");
    scanf("%d", &b);

    printf("Valor da variável C: ");
    scanf("%d", &c);

    printf("\nRetorno da função ordenadora: %d", ordenarVariaveis(&a, &b, &c));

    printf("\n\nVariáveis ordenadas: ");
    printf("\nA: %d, B: %d, C: %d\n", a, b, c);
}
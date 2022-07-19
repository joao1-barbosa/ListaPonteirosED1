//Q02 - Imprimir o endereço da variável que possue o maior endereço

#include <stdio.h>

void main() {
    int i = 10;
    int j = 12;
    int *pt;

    if ((&i)>(&j)){
        pt = &i;
    }else{
        pt = &j;
    }
    
    printf("%d\n", pt);
}

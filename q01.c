//Q01- Trocar valor das variáveis utilizando ponteiros

#include <stdio.h>

void main() {
    int i = 12;
    float f = 36.98;
    char c = 'D';

    int *pti = &i;
    float *ptf = &f;
    char *ptc = &c;

    printf("%d\n", i);
    printf("%.2f\n", f);
    printf("%c\n\n", c);

    *pti = 28;
    *ptf = 63.9;
    *ptc = 'p';
    
    printf("%d\n", i);
    printf("%.2f\n", f);
    printf("%c\n\n", c);
}
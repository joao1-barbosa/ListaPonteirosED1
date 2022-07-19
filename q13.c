//Q13 - Verificar se uma string ocorre na outra
/*OBS: O exercício poderia ser resolvido com a função strstr da biblioteca string.h,
    porém o objetivo da lista é praticar a manipulação de ponteiros */

#include<stdio.h>
#include<string.h>

void verificacao(int *i, char *pesq, char *comparativo){
    int teste;
    
    while(*(pesq+(*i)) != NULL){
        if(*(pesq+(*i)) == *(comparativo+(*i))){
            teste = 1;

            printf("%c     %c\n", *(pesq+(*i)),*(comparativo+(*i)));
        }else{
            teste = 0;
            printf("%c     %c\n", *(pesq+(*i)),*(comparativo+(*i)));
            break;
        }

        (*i)++;
    }
}

int ocorre(char *base, char *pesq){ //retorna 1 se a segunda string ocorre na primeira, e zero senão
    int i, teste;
    int cont = 0;
    char comparativo[20];

    for(i=0; i<20; i++){
        if(*(base+i)==*(pesq+i)){
            *(comparativo+cont) = *(pesq+i);
            cont++;
        }
    }

    

    
}

void main(){
    char string_base[20]; //String base 
    char string_pesq[20]; //String que será pesquisada na string base

    printf("Digite a primeira string: ");
    gets(string_base);

    printf("Digite a string que será pesquisada: ");
    gets(string_pesq);

    if(ocorre(string_base, string_pesq)==1){
        printf("\n\nA String pesquisada ocorre na primeira!\n");
    }else{
        printf("\n\nA String pesquisada não ocorre na primeira!\n");
    }
}
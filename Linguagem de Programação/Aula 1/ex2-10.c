#include<stdio.h>
#include "macros.h"

#define escreva printf
#define laco for
#define naturaisAte10 (int i = 0; i<10; i++)
#define quad(n) (n*n)

int main(){
    
    char ch;
    int a,b;

    printf("Digite um caracter: ");
    scanf("%c", &ch);

    if(eh_maiuscula(ch))
        escreva("eh maiuscula\n");
    else if (minuscula(ch))
        escreva("eh minuscula\n");
    return 0;
}
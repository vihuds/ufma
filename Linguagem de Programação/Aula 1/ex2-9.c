#include <stdio.h>

int main(){

    char caractere;

    printf("Digite o caractere: ");
    scanf("%c", &caractere);

    if((caractere >= 'a' && caractere <= 'z') || caractere >= 'A' && caractere <= 'Z')
        printf("eh uma letra\n");
    else if (caractere >= '0' && caractere <= '9')
        printf("eh um numero\n");
    else
        printf("eh um caractere especial.\n");
    return 0;
}
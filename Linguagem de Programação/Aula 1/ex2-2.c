#include<stdio.h>

int main(){

    int numero, original, count, contrario = 0;

    printf("Numero: ");
    scanf("%d", &numero);

    original = numero;

    while(numero > 0){
        count = numero % 10;
        contrario = contrario * 10 + count; // 1232
        numero /= 10; // 12321 - 1232 - 123 - 12
    }
    printf("%d\n", original);
    printf("%d\n", contrario);

    if(original == contrario)
        printf("palindromo.\n");
    else
        printf("nao palindromo.\n");

    return 0;
}
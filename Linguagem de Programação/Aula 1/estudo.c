#include <stdio.h>
#include <math.h>

int main(){

    int numero, resultado;

    printf("Voce quer saber a potencia de qual numero: ");
    scanf("%d", &numero);

    resultado = pow(numero, 2);
    printf("%d\n", resultado);

    return 0;
}
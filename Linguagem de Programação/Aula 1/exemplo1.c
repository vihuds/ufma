#include <stdio.h>

double ajuste(double salario, double x);

int main(){

    double salario, x;
    printf("Digite seu salário: ");
    scanf("%lf", &salario);

    printf("Digite a qtd de aumento: ");
    scanf("%lf", &x);

    printf("%.2lf", ajuste(salario, x));
    return 0;
}

double ajuste(double salario, double x){
    if (salario < 900.0)
        return salario + (salario*(1,5*(x/100)));
    else
        return salario + (salario*(x/100));
}
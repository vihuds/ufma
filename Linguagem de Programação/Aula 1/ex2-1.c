#include <stdio.h>

void inverter(int num){
    if (num < 0){
        num = -num;
    }

    while(num > 0){
        printf("%d", num%10);
        num/=10;
    }
}

int main(){

    int num;

    printf("Número: ");
    scanf("%d", &num);
/*
    while(num > 0){
        printf("%d", num%10);
        num/=10;
    }
*/  
    inverter(num);
    printf("\n");
    return 0;
}   
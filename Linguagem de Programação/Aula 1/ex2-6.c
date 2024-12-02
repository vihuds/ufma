#include <stdio.h>

int main(){

    int linhas;
    char ast = '*';

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++){
        for(int j = 1; j <= i; j++){
            printf("%c", ast);
        }
        printf("\n");
    }

    return 0;
}
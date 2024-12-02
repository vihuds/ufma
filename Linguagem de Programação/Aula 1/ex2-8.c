#include <stdio.h>

int main(){

    int linhas, num = 1;

    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    for (int i = 1; i <= linhas; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, resto;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resto = num % 5;

    if (num > 10 && resto == 0) {
        printf("\nNumero maior que zero e divisivel por 5\n");
    } else {
        printf("\nNao eh maior que zero e divisivel por 5\n");
    }

    system("pause");
    return 0;
}
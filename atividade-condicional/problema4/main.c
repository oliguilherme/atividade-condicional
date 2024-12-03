#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, resto;

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &num);

    resto = num % 2;

    if (resto == 0) {
        printf("\nDobro do numero: %d\n", num * 2);
    } else {
        printf("\nTripo do numero: %d\n", num * 3);
    }

    system("pause");
    return 0;
}
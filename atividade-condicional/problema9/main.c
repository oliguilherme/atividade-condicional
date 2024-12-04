#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, soma;
    
    printf("Entre com o primeiro e segundo número: ");
    scanf("%f%f", &num1, &num2);

    soma = num1 + num2;

    if (soma > 20) {
        printf("\n%.2f + 8 = %.2f\n", soma, soma + 8.0);
    } else {
        printf("\n%.2f - 5 = %.2f", soma, soma - 5.0);
    }

    system("pause");

    return 0;
}
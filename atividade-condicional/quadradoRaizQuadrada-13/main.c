#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num, raiz;

    printf("\n\nDigite um numero positivo para saber sua raiz ou numero negativo para saber o seu quadrado: ");
    scanf("%f", &num);

    if (num >= 0) {
        raiz = sqrt(num);
        printf("\nA raiz do numero %.3f eh: %.3f.\n\n", num, raiz);
    } else {
        printf("\nO dobro de %.2f eh: %.2f.\n\n", num, num * num);
    }

    system("pause");
    return 0;
}

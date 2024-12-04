#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("\n\nDigite dois numeros (separados por espaco): ");
    scanf("%f%f", &num1, &num2);

    if (num1 > num2) {
        printf("\n%.2f > %.2f\n\n", num1, num2);
    } else if (num1 < num2) {
        printf("\n%.2f > %.2f\n\n", num2, num1);
    } else {
        printf("\n%.2f = %.2f\n\n", num1, num2);
    }

    system("pause");

    return 0;
}

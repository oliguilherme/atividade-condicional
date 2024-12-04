#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4;

    printf("\n\nInforme quatro numeros (separando-os por espaco): ");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4) {
        printf("\n%.2f eh o maior.\n\n", num1);
    } else if (num2 > num1 && num2 > num3 && num2 > num4) {
        printf("\n%.2f eh o maior.\n\n", num2);
    } else if (num3 > num1 && num3 > num2 && num3 > num4)  {
        printf("\n%.2f eh o maior.\n\n", num3);
    } else {
        printf("\n%.2f eh o maior.\n\n", num4);
    }

    system("pause");

    return 0;
}

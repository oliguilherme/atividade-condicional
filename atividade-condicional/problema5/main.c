#include <stdio.h>
#include <stdlib.h>

int main() {
    float celsius;

    printf("Digite a temeratura em graus Celsius: ");
    scanf("%f", &celsius);

    if (celsius < 20.0) {
        float fahrenheit = (celsius * 9/5) + 32;
        printf("\nA temperatra %.2f°C em Fahrenheit eh: %.2f°F\n\n", celsius, fahrenheit);
    } else {
        float kelvin = celsius + 273.15;
        printf("\nA temperatura %.2f°C em Kelvin eh: %.2fK", celsius, kelvin);
    }

    system("pause");
    return 0;
}
#include <stdio.h>

int main() {
    float f, c;

    printf("Enter Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;
    printf("Celsius = %.2f\n", c);

    printf("Enter Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %.2f\n", f);

    return 0;
}
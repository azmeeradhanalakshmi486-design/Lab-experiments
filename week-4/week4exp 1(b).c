#include <stdio.h>

int main() {
    float A, B, C, D, result;

    printf("Enter A B C D: ");
    scanf("%f %f %f %f", &A, &B, &C, &D);

    if (B == 0 || C == 0) {
        printf("Division by zero is not possible");
        return 0;
    }

    result = A / B * C - B + A * D / 3;

    printf("Result = %.2f", result);

    return 0;
}
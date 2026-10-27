#include <stdio.h>

int main() {
    int A, B, result;

    printf("Enter A and B: ");
    scanf("%d %d", &A, &B);

    A++;
    B--;

    result = A + B - A;

    printf("Result = %d", result);

    return 0;
}
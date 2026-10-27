#include <stdio.h>

int main() {
    int i, J;

    printf("Enter i: ");
    scanf("%d", &i);

    J = i + (i + 2);

    printf("J = %d", J);

    return 0;
}
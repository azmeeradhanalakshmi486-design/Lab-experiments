#include <stdio.h>

int main() {
    int age;
    float marks;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("Age = %d\n", age);
    printf("Marks = %.2f\n", marks);

    return 0;
}
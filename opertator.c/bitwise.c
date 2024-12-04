#include <stdio.h>

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    // Bitwise AND
    printf("Bitwise AND (&) of %d and %d is: %d\n", a, b, a & b);

    // Bitwise OR
    printf("Bitwise OR (|) of %d and %d is: %d\n", a, b, a | b);

    // Bitwise XOR
    printf("Bitwise XOR (^) of %d and %d is: %d\n", a, b, a ^ b);

    // Bitwise NOT
    printf("Bitwise NOT (~) of %d is: %d\n", a, ~a);
    printf("Bitwise NOT (~) of %d is: %d\n", b, ~b);

    // Left shift
    printf("Left shift (%d << 2) is: %d\n", a, a << 2);

    // Right shift
    printf("Right shift (%d >> 2) is: %d\n", b, b >> 2);

    return 0;
}

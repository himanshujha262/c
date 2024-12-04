#include <stdio.h>

int main() {
    int a, b, c, smallest;

    // Input three numbers
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Using ternary operator to find the smallest number
    smallest = (a<b)?((a<c)?a:c):((b<c)?b:c);

    // Display the result
    printf("The smallest number is: %d\n", smallest);

    return 0;
}

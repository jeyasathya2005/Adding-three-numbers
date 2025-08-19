#include <stdio.h>

int main() {
    int num1, num2, num3, sum;

    // Input three numbers from user
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate the sum
    sum = num1 + num2 + num3;

    // Display the result
    printf("Sum of %d, %d and %d is %d\n", num1, num2, num3, sum);

    return 0;
}

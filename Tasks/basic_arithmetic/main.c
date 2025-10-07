#include <stdio.h>

int main() {
    int num1, num2;
    int sum, sub, mul;
    float div;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float)num1 / num2;

    printf("\nAddition: %d + %d = %d", num1, num2, sum);
    printf("\nSubtraction: %d - %d = %d", num1, num2, sub);
    printf("\nMultiplication: %d * %d = %d", num1, num2, mul);
    printf("\nDivision: %d / %d = %.2f\n", num1, num2, div);

    return 0;
}

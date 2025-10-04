#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 5;
    printf("\n--- Arithmetic operators ---");
    printf("\n Addition : %d", num1 + num2);
    printf("\n Sub : %d", num1 - num2);
    printf("\n Multi : %d", num1 * num2);
    printf("\n Division :  %d", num1 / num2);
    printf("\nMod : %d", num1 % num2);

    num1 = 200, num2 = 50;

    printf("\n--- Assignment operators ---");
    printf("\n Addition : %d", num1 += num2);
    printf("\n Sub : %d", num1 -= num2);
    printf("\n Multi : %d", num1 *= num2);
    printf("\n Division :  %d", num1 /= num2);
    printf("\nMod : %d", num1 %= num2);

    return 0;
}
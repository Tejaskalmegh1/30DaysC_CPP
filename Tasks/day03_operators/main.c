#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\nEnter First Number : "); 
    scanf("%d", &num1);

    printf("\nEnter Second Number : ");
    scanf("%d", &num2);

    printf("\n--- Arithmetic operators ---");
    
    printf("\n Addition : %d", num1 + num2);
    printf("\n Subtraction : %d", num1 - num2);
    printf("\n Multiplication : %d", num1 * num2);
    printf("\n Division :  %d", num1 / num2);
    printf("\n Modulus : %d", num1 % num2);

    return 0;
}
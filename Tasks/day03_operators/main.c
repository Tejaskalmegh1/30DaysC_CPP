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

    if (num1 > num2)
    {
        printf("\n %d is Greater!", num1);
    }
    else
    {
        printf("\n %d is Greater!", num2);
    }

    if (num1 > 0)
    {
        printf("\n First Number is Positive!");           
    }
    else if (num2 > 0)
    {
        printf("\n Second Number is Positive!");           
    }
    
    else if (num1 < 0 && num2 <0)
    {
        printf("\n Both Numbers are Negative");
    }
    else if (num1 < 0)
    {
        printf("\n ")
    }
    
    
    
    return 0;
}
#include <stdio.h>

int main()
{
    int num, num1 = 20, num2 = 10, num3 = 15;

    // IF STATEMENT

    if (num1 > num2)
    {
        printf("\nFirst Number is Greater ");
    }

    // IF - ELSE STATEMENT

    if (num2 > num3)
    {
        printf("\nSecond Number is Greater ");
    }
    else
    {
        printf("\nThird Number is Greater ");
    }

    // ELSE - IF STATEMENT

    printf("\nEnter any Number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("\n Number is Positive!");
    }
    else if (num < 0)
    {
        printf("\n Number is Negative!");
    }
    else
    {
        printf("\n Number is zero!");
    }

    return 0;
}
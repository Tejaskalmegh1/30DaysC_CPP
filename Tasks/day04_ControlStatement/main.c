#include<stdio.h>

int main()
{
    int n1 , i ;

    printf("\n Enter the Number : ");
    scanf("%d",&n1);

    if(n1 % 3 == 0 && n1 % 5 == 0)
    {
        printf("\n Number is divisible by 3 and 5 ");
    }
    else
    {
        printf("\n Number is Not divisible by 3 and 5 ");
    }

    for ( i = 1; i <= 10; i++)
    {
        printf("\n %d * %d = %d",n1,i,i*n1);
    }
    
    return 0;
}
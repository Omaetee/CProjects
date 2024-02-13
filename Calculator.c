#include <stdio.h>
#include <stdlib.h>

// OMAE TERESIA KEMUNTO
//ENE212-0080/2021

int main()
{
    int num1,num2,Sum,Difference;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    Sum = num1 + num2;
    Difference = num1 - num2;

    printf("The sum of your numbers is: %d\n", Sum);
    printf("The difference of your numbers is: %d\n", Difference);
    printf("The sum and difference of your numbers are: %d, %d\n", Sum , Difference);


    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//ENE212-0080/2021
//OMAE TERESIA

// A c program to ammend calc1 code (calling functions)

int multiply(int num1, int num2)
{
    return num1*num2;
}
int divide(int num1, int num2, int * quotient)
{
    if(num2 == 0)
        {
            printf("Math Error: Division by zero is not possible.\n");
            return 0;
        }
        else{
            *quotient = num1 / num2 ;
            return 1;
        }
    }
int checkEvenOdd(int num)
{
    if (num%2 == 0)
        return 1;
        else
            return 0;
// Even is 1 while Odd is 0
}
int main() //Multiplication and division
    {
        int num1,num2,Multiplication, Quotient;

        printf("Enter the first number: ");
        scanf("%d", &num1);
        printf("Enter the second number: ");
        scanf("%d", &num2);

        Multiplication = multiply(num1, num2);
        printf("Multiplication: %d\n", Multiplication);

        if (divide(num1, num2, &Quotient))
        {
            printf("Quotient: %d\n", Quotient);
        }
// Checking if the number are Even or odd
    if (checkEvenOdd(num1))
        {
        printf("%d is even.\n", num1);
    }
        else {
            printf("%d is odd.\n", num2);
        }
//Checking for remainder
    int checkRemainder;
    printf("Remainder: %d\n",num1,num2);

    return 0;
}

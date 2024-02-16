#include <stdio.h>
#include <stdlib.h>

//ENE212-0080/2021
//OMAE TERESIA

/*A simple calculator that performs multiplication & division and checks for even or
odd numbers, divisibility by zero and remainders in cases of division*/

int main()
{
   int num1, num2, Multiplication, Quotient, Remainder;

   //Enter two number
   printf("Enter the first number: ");
   scanf("%d", &num1);
   printf("Enter the second number: ");
   scanf("%d", &num2);

   //Checking for division by zero
   if(num2 == 0)
    {
    printf("Math Error.\n");
   }
   else
    {
    Multiplication = num1 * num2;
    Quotient = num1 / num2;
    Remainder = num1 % num2;

    printf("The product of your number is: %d\n", Multiplication);
    printf("The division of your numbers is: %d\n", Quotient);
   }

   //Checking if there is a remainder
   if(Remainder == 0){
    printf("%d is completely divisible by %d.\n", num1,num2);
   } else {
        printf("%d is not completely divisible by %d. Remainder: %d\n", num1,num2,Remainder);
        }
    // Checking whether the numbers are even or odd
    if (num1 % 2 == 0){
        printf("%d is even.\n", num1);
    }else
    {
    printf("%d is odd.\n", num1);
    }

    if (num2 % 2 == 0){
        printf("%d is even.\n", num2);
    }else
    {
    printf("%d is odd.\n", num2);
    }

    return 0;
}

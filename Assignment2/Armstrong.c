#include <math.h>
#include <stdio.h>

//ENE212-0080/2021
//OMAE TERESIA

//C program to check whether a number n is Armstrong or not

int main()
{
   int num, original, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   original = num;

   // The number of digits of num are stored in n
   for (original = num; original != 0; ++n)
    {
       original /= 10;
   }

   for (original = num; original != 0; original /= 10)
    {
       remainder = original % 10;

      // Store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // If num is equal to the result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}


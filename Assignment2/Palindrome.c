#include <stdio.h>
#include <stdlib.h>

//ENE212-0080/2021
//OMAE TERESIA KEMUNTO

//To Check whether a given number is a palindrome or not
//A number is said to be a palindrome  if the reverse of that number is equal to the original number
int main()
{
     int n, reversed = 0, remainder, original;
     printf("Enter an integer: ");
     scanf("%d", &n);
     original = n;

    // a reversed integer is stored in a reversed variable
    while (n != 0)
        {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // checking if the number is a palindrome
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

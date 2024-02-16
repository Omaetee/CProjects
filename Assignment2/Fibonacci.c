#include <stdio.h>
#include <stdlib.h>

//ENE212-0080/2021
//OMAE TERESIA

//C Program to generate Fibonacci series
int main()
{
    int num, a=-1, b=1, c;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Fibonacci series: ");

    for (int i = 0; i < num; i++)
    {
        c = a + b;
        printf("%d", c);
        a = b;
        b = c;
    }
    return 0;
}

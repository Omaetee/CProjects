#include <stdio.h>
#include <stdlib.h>

//ENE212-0080/2021
//OMAE TERESIA KEMUNTO

int main()
{
    //Declaring the array
    int score[5]={ 10, 20 , 40 , 50 };
    int i, element, pos;

    //Printing elements in the array before insertion
    printf("Initial elements in the array: \n");
        for(i=0; i<5-1; i++)
        {
            printf("%d", score[i]);
        }

    printf("\nEnter element to be inserted:");
    scanf("%d", &element);
    printf("\nEnter the position to insert element:");
    scanf("%d", &pos);
    for(i=5-1; i>=pos; i--)
    score[i]=score[i-1];
    score[pos-1]=element;

    //print array after insertion
    printf("\nElements in the array after insertion:");
    for(i=0; i<5; i++)
    {
        printf("%d",score[i]);
    }

    // Deleting the inserted number from the array
    for (int i = pos-1; i < 5-1; i++) 
    {
        score[i] = score[i+1];
    }

    // Printing out the array after deletion
    printf("\nFinal elements in the array after deletion: ");
    for (int i = 0; i < 5-1; i++) 
    {
        printf("%d ", score[i]);
    }
    printf("\n");

    return 0;
}
//OMAE TERESIA KEMUNTO
//ENE212-0080/2021


#include <stdio.h>
#include <stdlib.h>
struct student {
    char full_name[50];
    int position;
    int registrationNumber;
    char units,unit1[30],unit2[30],unit3[30];
} s[5];

int main()
{
    int i;
    
    printf("Enter student details:\n");

    //Reading and storing of student details
    for (i=0; i<5; i++){
         s[i].position = i+1;
         printf("\nFor position %d,\n", s[i].position);
         printf("Enter full name: ");
         scanf("%s", s[i].full_name );
         printf("\nEnter registration number: ");
         scanf("%d", &s[i].registrationNumber);
         
         printf("\nEnter unit one:");
         scanf("%s", s[i].unit1);

         printf("\nEnter unit two: ");
         scanf("%s", s[i].unit2);

         printf("\nEnter unit three: ");
         scanf("%s", &s[i].unit3);
    }

//Displaying student details
printf("Displaying infromation: \n");

for(i=0;i<5;i++){
    printf("\nPosition: %d\n", i+1);
    printf("Full name: ");
    puts(s[i].full_name);
    printf("Registration number: %d", s[i].registrationNumber);
    printf("\n");
    printf("Units: \n");
    printf( "1.%s\n",s[i].unit1);
    printf("2.%s\n",s[i].unit2);
    printf("3.%s\n",s[i].unit3);
    
}
   
    return 0;
}
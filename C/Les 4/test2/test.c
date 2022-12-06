/*
Schrijf een C programma die de gebruiker een array van structures laat invoeren (3 elementen).
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char naam[20];
    int leeftijd;
} personen;

int main()
{
    personen *personen_data = malloc(sizeof(personen));
    personen_data[0].naam = "Sam";

    
    for (int i = 0; i < 2; i++){
        printf("\nVoer je gegevens in \n");

        printf("Voer je naam in: ");  
        scanf("%s",org[2].naam);  
        
        printf("\nVoer je leeftijd in: ");
        scanf("%d",&org[2].leeftijd);

        printf("Je gegevens: \n");
        printf("%s %d %s %d\n",org[2].naam,org[2].leeftijd);
    }
    
    return 0;
};
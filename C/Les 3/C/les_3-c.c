/*
Schrijf een C programma die de gebruiker een array van structures laat invoeren (3 elementen).
*/

#include <stdio.h>

struct student 
{
    char naam[20];
    int leeftijd;

    struct opleiding
    {
        char opl_naam[20];
        int opl_instroomjaar;


    } opl;
};

int main()
{
    struct student org[2];
    
    for (int i = 0; i < 2; i++){
        printf("\nVoer je gegevens in \n");

        printf("Voer je naam in: ");  
        scanf("%s",org[2].naam);  
        
        printf("\nVoer je leeftijd in: ");
        scanf("%d",&org[2].leeftijd);
        
        printf("Hallo %s", org[2].naam);
        printf("\nNaam van de opleiding: ");
        scanf("%s",&org[2].opl.opl_naam);
        
        printf("\nInstroomjaar: ");
        scanf("%d",&org[2].opl.opl_instroomjaar);

        printf("Je gegevens: \n");
        printf("%s %d %s %d\n",org[2].naam,org[2].leeftijd,org[2].opl.opl_naam,org[2].opl.opl_instroomjaar);
    }
    
    return 0;
};
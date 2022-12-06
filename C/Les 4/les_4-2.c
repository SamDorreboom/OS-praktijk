#include <stdio.h>
#include <string.h>
#include <malloc.h>


void gebruikers_input(int *aantal);

struct personen
{
    char* naam[20];
    int leeftijd;
};
typedef struct personen personendata;

int main(void){
    struct personendata* personen_data = malloc((sizeof(char[20])+sizeof(int)));
    personen_data[0].naam = "Sam";
}

/*
int main(void)
{
    struct persoon lijst;
    int size = sizeof(int) + sizeof(char[20]);
    lijst = (int*) malloc(size);
    printf("\t opslag[%d]: %d \n", &opslag[0], &opslag[0]  );
    printf("\t opslag[%d]: %d \n", &opslag[9], &opslag[9]  );
    printf("%d", sizeof(char[20]));


}
*/


void gebruikers_input(void)
{
    printf("Voer je naam in: ");  
    scanf("%s",org[2].naam);  
        
    printf("\nVoer je leeftijd in: ");
    scanf("%d",&org[2].leeftijd);
    
}
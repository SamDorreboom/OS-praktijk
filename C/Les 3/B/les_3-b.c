/*
Schrijf een C programma die de gebruiker vraag om een zin.
Na invoer wordt de lengte van deze ingevoerde zin uitgeprint (in aantal chars).
*/

#include <stdio.h>

int main()
{
    int lengte = 0, i;
    char str[20];

    printf("Voer een zin in: ");
    gets(str);
    
    for(i = 0; str[i] != NULL; i++) 
    {   
        lengte++;
    }  

    printf("Zinlengte: %d", lengte);

    return 0;
}

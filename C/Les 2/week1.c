#include <stdio.h>

void print_function( char letter );
int ctr;
int count;

int functie( void )
{
    char star = '*';
    char dash = '-';
    for (count = 0 ; count < 10; count++)
    {
        for (ctr = 0 ; ctr < 10; ctr++ )
        {
            print_function( star );
            print_function( dash );
            printf("\n");
        }
    }
    return 0;
}

void print_function ( char letter )
{
    for ( ctr = 0; ctr < 9; ctr++) 
    {
        printf("%c", letter);
    }
}

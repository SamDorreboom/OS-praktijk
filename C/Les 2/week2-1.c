#include <stdio.h>


int functie( void );

int main() {
  // Create an integer variable that will store the number we get from the user
  int myNum;
  while (0==0)
  {
      // Ask the user to type a number
    printf("Type a number and press enter: \n"); 
    // Get and save the number the user types
    scanf("%d", &myNum);


    if (myNum == 2){
      functie();
    }
    else if (myNum < 0)
    {
      return 0;
    }
    else{
      printf("Je keuze is: %d\n", myNum);
    }
    
  }
}
 
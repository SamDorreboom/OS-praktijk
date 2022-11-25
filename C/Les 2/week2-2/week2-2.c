#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void omtrek_berekenen(float diameter, float *);


int main(){
    float diameter;
    printf("Diameter: \n");
    scanf("%f", &diameter);
    float omtrek;
    omtrek_berekenen(diameter,&omtrek);
    printf("De omtrek is: %f",omtrek);

}

void omtrek_berekenen(float diameter, float *omtrekptr){
    *omtrekptr = diameter * M_PI;
}
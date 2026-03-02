//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

/*Este es un programa que calcula LA RESISTENCIA  de un  
circuito en base a la ley de ohm*/

#include <stdio.h>

int main (){
    float I; 
    float V;
    float R;
    
 printf("Programa que te calcula la resistencia de un circuito conociendo la Corriente(I) y Voltaje(V)\n");
 printf("Ingresa la corriente (Amperios) y el voltaje  (Volts) SEPARANDO CON UNA COMA \n ");
 scanf("%f,%f", &I, &V);
 
    R= V/I;
 printf("La resistencia   en el circuirto es igual %.2f Ohms",R);
 
 
 return 0;
 
    
    
    }

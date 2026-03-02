//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

/*Este es un programa que calcula EL VOLTAJE de un  
circuito en base a la ley de ohm*/

#include <stdio.h>

int main (){
    float I; 
    float V;
    float R;
    
   printf("Programa que te calcula el Voltaje  de un circuito conociendo su Resistencia(R) y sus corriente(I)\n");
   printf("Ingresa la corriente (Amperios\n");
   scanf("%f", &I);
   printf("Ingresa su Resistencia (ohms)\n ");
   scanf("%f", &R);
 
      V=R*I;
 
   printf("El voltaje que fluye en el circuirto es igual %.2f Volts",V);
 
 
 return 0;
 
    
    
    }

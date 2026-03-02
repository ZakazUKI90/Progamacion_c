//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

/*Este es un programa que calcula la corriente de un  
circuito en base a la ley de ohm*/

#include <stdio.h>

int main (){
    float I; 
    float V;
    float R;
    
 printf("Programa que te calcula la corriente de un circuito conociendo su Resistencia(R) y Voltaje(V)\n");
 printf("Ingresa voltaje(Volts) y resistencia (Ohms) SEPARANDO CON UNA COMA  ");
 scanf("%f,%f", &V, &R);
 
     I=V/R;
 printf("La corriente que fluye en el circuirto es igual %.2f Amperios",I);
 
 
 return 0;
 
    
    
    }

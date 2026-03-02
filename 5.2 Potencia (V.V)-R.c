//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

/*Programa que calcula la potencia electrica 
de un circuito conociendo  el voltaje
y la resistencia delcircuito.
*/

#include <stdio.h>

int main (){
     float V, R, PO;
     
     printf("Ingresa la resistencia del circuito expresada en (Ohms) y el voltaje expresado en (volts)\n");
     printf("Separa ambos datos por una coma(,)\n");
     
     scanf("%f,%f", &R, &V);
     
     PO=(V*V)/R;
     
     printf("La potencia que fluye en el circutio es igual =====>  %f Watts", PO);
     
     return 0;
     
     
    
    
    
    }

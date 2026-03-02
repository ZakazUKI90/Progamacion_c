//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

/*Programa que calcula la potencia electrica 
de un circuito conociendo el voltaje y la corriente
*/

#include <stdio.h>

int main (){
    float V, I, PO;
    
    printf("Programa que calcula la potencia electrica de un circuito conociendo el voltaje(V) y la corriente(I)\n");
    printf("Ingresa la corriente(AmPerios)\n");
    scanf("%f", &I);
    
    printf("Ingresa el voltaje(Volts)\n");
    scanf("%f", &V);
    
      PO = V*I ;
    printf("La potencia electrica del circuto expresada en watts es ===>>> %.5f Watts \n", PO);
    
    
    return 0;
    
    
    }

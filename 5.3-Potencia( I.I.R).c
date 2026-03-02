//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada


/*Programa que calcula la potencia electrica 
de un circuito conociendo  la corriente
y la resistencia delcircuito.
*/
  
  
  
#include <stdio.h>
int main(){
    float I, R,PO;
    
    
    printf("\tIngresa la resistencia del circuito expresada en (Ohms) y la corriente expresada en  (Amperios)\n");
    printf("\tSepara ambos datos por una coma(,)\n");
    scanf("%f,%f", &R, &I);
    
    PO =I*I*R;
    
     printf("\tLa potencia que fluye en el circutio es igual ===> %.5f watts", PO);
     
     return 0; 
    }


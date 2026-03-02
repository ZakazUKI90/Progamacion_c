//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

/*Este programa suma dos numero 
de tipo flotante o decimal */

#include <stdio.h>
int main (){
   float op1, op2, sum;
   
 printf("Ingresa el primer numero\n");
 scanf("%f", &op1);
 
 printf("Ingresa el segundo numeor\n");
 scanf("%f", &op2);
 
  sum = op1 + op2 ;
  
 printf("El resultado de la adicion es   %.1f",sum);
  
  
  return 0;
}  
  

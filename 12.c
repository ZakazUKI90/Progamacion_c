//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada
/*Programa que compara 5 numeros y te evalua el menor
*/

#include<stdio.h>
short int A,B,C,D,E, MIN;
int main(){
	
	
	
	printf("Ingresa los 5 numeros a comparar separados por(/)\n");
	scanf("%hd/%hd/%hd/%hd/%hd", &A, &B, &C,&D,&E);
	
	MIN=A;
	
	
	if(B<MIN)
	  MIN=B;
	    if(C<MIN)
	      MIN=C;
	       if(D<MIN)
	         MIN=D;
	           if(E<MIN)
	             MIN=E;
	             
printf("despues de comparar los numero %hd , %hd, %hd, %hd, %hd el numero menor es  %hd", A, B, C,D,E, MIN);

return 0;
}

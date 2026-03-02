//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

#include <stdio.h>
short int A, B;
int main(){
	
	printf("Ingresa dos numeros separados por una (,)\n");
	scanf("%hd,%hd", &A,&B);
	
	if(A==B)
	printf("El numero %hd es igual al numero  %hd \n", A,B);
	
	return 0;

	
	
}


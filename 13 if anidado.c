//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

#include<stdio.h>
short  A;
int main ()
{
	
	printf("ngresa el numero \n");
	scanf("%hd", &A);
	
	if(A%2==0){
	
	    	if(A% 3==0)
			
	         printf("el numero es divisible entre 2 y 3\n");
	    
		else 
	    printf("el numero es divisible entre 3\n");
}
    else {
    	if(A%3==0)
    	printf("El numero solo es disible entre 3\n");
       else
       printf("el numero no es divisible entre 2 y 3\n");
       
	}
	return 0;
}

//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

#include<stdio.h>
short int SM_2, SM_1;
int main(){
	
	printf("Ingresar la temperatura el primer motor\n");
	scanf("%hd", &SM_1);
	
	printf("Ingresar la temperatura del segundo motor\n");
	scanf("%hd", &SM_2);
	
	if(SM_1>=25 ||SM_2>=25)
	printf("Algun motor sobrecalentadose\n");
	else 
	printf("Trabajando de manera normal\n");
	
	
	return 0;
	

}


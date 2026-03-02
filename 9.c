//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

#include<stdio.h>

short int SM_1, SM_2;
int main(){
	
	printf("ingresa la temperatura de tus motores, separado por una(,)\n");
	scanf("%hd,%hd", &SM_1, &SM_2);
	
	if(SM_1>=25 ||SM_2>=25){
	
	   
	    if(SM_1>25){
		printf("Motor uno sobrecalentadose\n");
	}   
	     else if(SM_1==SM_2){
	     	printf("Ambos motores sobrecalentadose\n");
	     	
		 }
		 else{
		 	printf("Motor 2 sobrecalentandose\n");
		 	
		 	
		 }
	}
	
	else
	printf("Motores  operando normal\n");
	
	
	return 0;
	
	
}


//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

#include<stdio.h>
short int SM;
int main()
{
	printf("Ingresa la temperatura de tu motor\n");
	scanf("%hd", &SM);
	
	if(SM>=25)
	printf("Encendido de alarma, motor sobrecalentandose\n");
	else
	printf("Trabajando de manera normal\n");
	
	return 0;
}


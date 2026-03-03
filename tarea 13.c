//Autor:Avelino velasco Gilberto
//Ingenieria en electronica
//Tecnologico Nacional de Mexico Campus OAXACA
//Programacion estructurada

#include <stdio.h>
float A,B,C,D,E,F,MED;
int main (){
	
	printf("ingresa tus califcaciones, separadas por un(/)\n");
	scanf("%f/%f/%f/%f/%f/%f",&A,&B,&C,&D,&E,&F);
	
	MED=(A+B+C+D+E+F)/6;
	
	
    if(MED>=70){
	
    printf("Elpromedio es %0.2f, por lo tanto estas aprobado", MED);
}
    else {
	
	    if(MED<=70&&MED>=40)
	     printf("Tu promedio es %0.2f porr lo tanto tenes derecho a segundas", MED);
	else 
	 printf("Suerte el siguiente semestre\n  ===> %0.2f", MED);
}
  return 0;
  
}

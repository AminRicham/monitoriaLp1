#include <stdio.h>

float celToFar(float celcius){
	return(9/5)*celcius +32 ;
}

int main() {
	float valInicial=0;
	float valFinal=0;
	float incremento=0;
	float faren=0;
	printf("\nInsira o valor incial: ");
	scanf("%f",&valInicial);
	printf("\nInsira o valor final: ");
	scanf("%f",&valFinal);
	printf("\nInsira o incremento: ");
	scanf("%f",&incremento);
	
	
	for(valInicial;valInicial<=valFinal; valInicial+=incremento){
		printf("Celcius:%f \tFaren:%f \n",valInicial, celToFar(valInicial));
	}
	return 0;
}


include <stdio.h>
/* CRIA O VALOR DE NUM
Manda o endere�o para a fun�ao
a fun�ao pega o valor e aumenta mais um
*/

void soma(int*num);

int main(){
	int num;
	printf("Insira o valor de num");
	scanf("%d",&num);
	soma(&num); //& OPerador unario de endere�o
	printf("%d",num);
}
void soma(int* num){ // OPERADOR DE "VALOR"
	(*num)++;
}

include <stdio.h>
/* CRIA O VALOR DE NUM
Manda o endereço para a funçao
a funçao pega o valor e aumenta mais um
*/

void soma(int*num);

int main(){
	int num;
	printf("Insira o valor de num");
	scanf("%d",&num);
	soma(&num); //& OPerador unario de endereço
	printf("%d",num);
}
void soma(int* num){ // OPERADOR DE "VALOR"
	(*num)++;
}

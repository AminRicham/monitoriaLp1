#include <stdio.h>
/*  Inserir os dois numeros definindo o menor
	fazer a troca usando passagem por referencia
	depois ir divindo o maior numero desde dois ate o menor numero
	sempre que a resposta tiver resto zero o mdc vai mudar
	senao é 1.
*/
void ordem(int* n1, int*n2);
int main (){
	int n1=0;
	int n2=0;
	int mdc=0;
	printf("Insira os naturais:");
	scanf("%d %d", &n1, &n2);
	printf("%d, %d",n1,n2);
	if(n1>n2){
		ordem(&n1,&n2);
	}
//	printf("\n%d, %d",n1,n2);
	for(int i=1; i<=n1;i++){
		if(n2%i==0){
			mdc=i;
		}
	}
	printf("\nO MDC é:%d",aux);
	return 0;
}

void ordem(int*n1, int *n2){
	int aux;
	aux=*n1;
	*n1=*n2;
	*n2=aux;
}

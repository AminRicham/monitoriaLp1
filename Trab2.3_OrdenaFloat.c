#include<stdio.h>
#include<stdlib.h>

/*alocar e ordenar,
criar duas variaveis que percorrem o vetor, uma mais rapida que a outra
com um auxiliar tendo a mais lenta, ele vai comparando com os valores da mais rapida
e se for necessario fazer a troca
*/

void ordena(float*vet, int tam);
int main(){
	float *vetor;
	int tam=0;
	scanf("%d",&tam);
	vetor = (float*) malloc(tam*sizeof(float));
	
	for(int i=0; i<tam;i++){
		scanf("%f",&vetor[i]);
	}
	ordena(vetor,tam);
	for(int i=0; i<tam;i++){
		printf("\n%.2f",vetor[i]);
	}
	
		
	return 0;
}
void ordena(float*vet,int tam){
	float aux=0;
	for(int i=0; i<tam;i++){
		for(int j=0;j<tam;j++){
			aux=vet[i];
			if(aux>vet[j]){
				vet[i]=vet[j];
				vet[j]=aux;
			}
		}
	}
}

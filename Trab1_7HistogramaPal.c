#include <stdio.h>
#include <stdlib.h>
/*
 1-usar o strtok para separar as palavras
 2-armazenar a palavra a cada "passagem" em um nó
 3-verificar se existe um nó com a mesma palavra, se existe, vai 5 
 4-insere na lista
 5-aumentar o contador dessa palavra no nó original
 6-excluir o nó
 7-volta para 1
*/
struct no{
	char *palavra;
	int contador;
	struct no *prox;
}

struct no *criaNo(char*palavra){
	struct no *aux = malloc(sizeof(*aux);
	aux->palavra=palavra;
	aux->prox=NULL;
	return aux;
}

int verifExis(struct no** no; struct no** inicio){
	struct no* aux= inicio;
	while(aux->prox=!NULL);
		if(strcomp(aux->palavra, no->palavra)!=0)
			return 0;
		else
			return 1;
		aux=aux->prox;
}

void insereFim(struct no **no; char *palavra){
	if(*no)
		insereFim(&((*p)->prox));
	else{
		struct no* aux= criaNo(palavra);
		aux->prox=NULL;
		*no=aux; 
	}
} 

void ordenaAlfabeto(struct no** inicioL){
	
	
}
	
int main(){
	struct no* inicioL = NULL;
	
	char *entrada=malloc(sizeof(char*100000));
	fgets(entrada,100000,stdin);
	
	char*palavra;	
	palavra= strtok(entrada, " ,.-,;:\n\t");
	while(palavra!=NULL){
		palavra = strtok(NULL, " ,.-,;:\n\t");
		printf("%s",palavra);
		struct no* pal= NULL;
		criaNo(palavra);
		insereFim(&pal,palavra);
		
	}
	
	return 0;
}

#include<stdio.h>
#include<string.h>
/*
scanf so grava ate o espaço por isso do gets
o strtok ele divide a string nos pontos em que marcamos(Limitadores)
Ele começa no inicio ate o primeiro limitador, depois vai desse limitador ate o proximo

Aqui a gente comeca inserindo a frase em um vetor de char, definimos os limitadores  e criamos um contador
para cada vez que o strtok funcionar
*/
int main(){
	int contador=0;
	char frase[1025];
	char *aux;
	
	printf("Insira a frase:\n");
	gets(frase);
	//printf("%s",frase);
	
	aux= strtok(frase, " .,;:");
	while(aux!=NULL){
		aux = strtok(NULL, " .,;:");
		contador++;
	}
	printf("%d",contador);
	return 0;
}

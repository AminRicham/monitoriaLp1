#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct Funcionario{
	unsigned char nome[51];
	unsigned char matricula[13];
	unsigned char endereco[66];
	unsigned char cpf[13];
	unsigned char cod_banco[4];
	unsigned char agencia[6];
	unsigned char conta[9];
	float valor_hora;
	float valorTotal;
};

struct Mensal{
	unsigned char matricula[13];
	int horas;
};

int main(){
	Funcionario firma[MAX];
	Mensal nov[MAX];
	FILE *arq_funcio;
	FILE *arq_nov;
	arq_funcio = fopen("Funcionarios.txt","r");
	if(arq_funcio){
		//ler as 10 linhas
		for(int i=0; i<10;i++){
			//Ler o nome
			for(int j=0; j<50; j++){
				firma[i].nome[j] = getc(arq_funcio);
			}
			//Ler a matricula
			for(int j=0; j<12; j++){
				firma[i].matricula[j] = getc(arq_funcio);
			}
			//Ler o endereço
			for(int j=0; j<65; j++){
				firma[i].endereco[j] = getc(arq_funcio);
			}
			//Ler o cpf
			for(int j=0; j<11; j++){
				firma[i].cpf[j] = getc(arq_funcio);
			}
			//Ler o cod bancario
			for(int j=0; j<3; j++){
				firma[i].cod_banco[j] = getc(arq_funcio);
			}
			//Ler a agencia
			for(int j=0; j<5; j++){
				firma[i].agencia[j]= getc(arq_funcio);
			}
			//ler a conta
			for(int j=0; j<8; j++){
				firma[i].conta[j] = getc(arq_funcio);
			}
			//Ler o valor da hora
			fscanf(arq_funcio,"%f", firma[i].valor_hora);
		}
	}else{
		printf("Erro, arq1 não aberto.");
	}
	fclose(arq_funcio);
	
	arq_nov = fopen("Novembro.txt","r");
	if(arq_nov){
		//Ler as 10 linhas
		for(int i=0; i<10; i++){		
			//Pegar a matricula
			for(int j=0; j<12; j++){
				nov[i].matricula[j] = getc(arq_nov);	
			}
			//Pula a /
			getc(arq_nov);
			
			//Pega as horas
			fscanf(arq_nov,"%d",nov[i].horas);
			
			}
	}else{
		printf("Erro, arq2 não aberto.");
	}
	fclose(arq_nov);
	
	//percorrer os dois vetores
	for(int i=0; i<10; i++){
		for(int j=0;j<10;j++){
			//ver se sao as matriculas sao iguais
			if(firma[i].matricula == nov[j].matricula){
				//calcular o valor total
				firma[i].valorTotal = firma[i].valor_hora * nov[i].horas;
			}
		}
	}
	for(int i=0; i<10;i++){
		printf("%s|%s|%s|%s|%s|%s|%d",firma[i].nome, firma[i].cpf, firma[i].cod_banco, firma[i].agencia, firma[i].conta, firma[i].valorTotal);
	}
	printf("sim");
	return 0;
}

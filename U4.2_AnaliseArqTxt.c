#include <stdio.h>
#include <ctype.h>

int main(){
	char nome_arq[50];
	FILE *arq;
	char c;
	int num_impri = 0, 
		num_linhas = 0, 
		num_carac = 0;
	
	printf("Insira o nome do arquivo:");
	scanf("%s", nome_arq);
	
	arq = fopen(nome_arq, "r");
	if(arq!=NULL){
		while(c = fgetc(arq) !=EOF){			
			if( c == "\n"){
				num_linhas++;
			}
			if(isprint(c)){
				num_impri++;
			}
			num_carac++;
		}
	printf("Numero de caracteres lidos:%d \n número de caracteres imprimíveis lidos:%d \n número de linhas:%d \n", num_carac, num_impri, num_linhas);
			
	}else{
		printf("Erro no arquivo %s\n", nome_arq);
	}
	
	fclose(arq);
	
	
	return 0;
}

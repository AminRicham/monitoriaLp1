#include <stdio.h>
/*Ler os dados e printar o resultado
Ver a quantidade de dias de cada mes e em quais meses essa mesma quantidade se repete
depois dessa contagem e so classificar cada um por cadeia de ifs
contando do mes 1 ate o mes inserido(sem contar com ele, se nao aumenta uma contagem),
somar o total de diaAs de cada mes
depois é so somar a quantidade de dias restantes
*/
int diaDoAno(int dia, int mes, int ano);

int main(){
	int dia,
		mes,
		ano;
	scanf("%i %i %i",&dia, &mes, &ano);
	printf("\n\n%d",diaDoAno(dia,mes,ano));
	return 0;
}
int diaDoAno(int dia, int mes, int ano){
	//12 meses.
	//sendo jan31 Fev28/29 Marc31 Abril30 Maio31 Jun30 Jul31 Agos31 Set30 Out31 Nov30 Dez31
	// 31-7
	// 30-4
	//28/29-1
	int diasTotal=0;
	int i=0;
	for(i=1; i<mes; i++){
		if(i==4 || i==6 || i==9 || i==11){
			diasTotal += 30;
		}else{
			if(i==2){
				if(ano%4==0){
					diasTotal +=29;
				}else{
					diasTotal +=28;
				}
			}else{
				diasTotal +=31;
			}
		}
	}
	diasTotal+=dia;
	return diasTotal;
}


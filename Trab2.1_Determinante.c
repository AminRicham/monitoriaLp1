#include <stdio.h>
#define max 3
int main(){
	double matrix[max][max];
	double determinante=0;
	double somaDireita;
	
	for(int i=0; i<max; i++){
		printf("Insira a linha %d\n",i);
		for(int j=0;j<max;j++){
			scanf("%f",&matrix[i][j]);
		}
	}
	
	for(int i=0; i<max;i++){
		for(int j=0; j<=max; j++){
			if(j==max){
				j=0;
			}
			if(j==i){
				multiplica1*=matrix[i][j];
			}
			if(j==(i+1)){
				somaDireita+=matrix[i][j]
			}
			if(j==(i+2)){
				
			}
		}
	}
	matrix[0][0]*matrix[1][1]*matrix[2][2] // j=i
	matrix[0][1]*matrix[1][2]*matrix[2][0] // j=i+1
	matrix[0][2]*matrix[1][0]*matrix[2][1] // j=i+2
	
	matrix[2][0]*matrix[1][1]*matrix[0][2] //
	matrix[2][1]*matrix[1][2]*matrix[0][0]
	matrix[2][2]*matrix[1][0]*matrix[0][1]
	return 0;
}

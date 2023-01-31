#include <stdio.h>
/*ENTENDER MELHOR E MELHOAR O IF 
*/
int main(){
	int a=0;
	int b=0;
	
	scanf("%d %d",&a, &b);
	if((-128<=a && a<=127) || (-128<=b && b<=127)){
		printf("%hhX %hhd\n",a,a);
		printf("%hhX %hhd\n",b,b);
		printf("%hhX %hhd\n",a+b,a+b);
	}else{
		printf("Erradoooo");
	}

	return 0;	
}

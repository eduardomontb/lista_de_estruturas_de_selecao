//Faça um programa que receba dois números e imprima o menor dos dois.

#include <stdio.h>

int main(){

	//declaração de variaveis
	float n1, n2;

	//entrada de dados
	printf("Digite um numero = ");
	scanf("%f", &n1);
	
	printf("\nDigite outro numero =");
	scanf("%f", &n2);

	//estrutura condicional
	if(n1 > n2){
		printf("\n\no maior numero e = %.2f\n");
		
	}else{
		printf("\n\no maior numero e = %.2f\n", n2);
	}
	
	return 0;
}

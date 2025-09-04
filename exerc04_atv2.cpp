//Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade ou não.

#include <stdio.h>

int main(){

	//declaração de variavel
	int idade;

	//entrada de dados
	printf("Digite sua idade = ");
	scanf("%i", &idade);

	//processamento de dados
	//estrutura condicional
	if(idade >= 18){
		printf("\n\n\nVoce e maior de idade.\n");	
	}else{
		printf("\n\n\nVoce nao e maior de idade.\n");
	} 
	return 0;
}

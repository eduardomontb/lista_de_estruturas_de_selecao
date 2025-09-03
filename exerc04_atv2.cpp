//Faça um programa que receba a idade de uma pessoa e imprima mensagem de maioridade ou não.

#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Digite sua idade = ");
	scanf("%i", &idade);
	
	if(idade >= 18){
		printf("\n\n\nVoce e maior de idade.\n");	
	}else{
		printf("\n\n\nVoce nao e maior de idade.\n");
	} 
	return 0;
}

//Uma empresa decide dar um aumento de 30% aos funcion�rios cujo sal�rio � inferiora 500
//reais. Escreva um programa que receba o sal�rio de um funcion�rio e imprima o valor do
//sal�rio reajustado ou uma mensagem caso o funcion�rio n�o tenha direito ao aumento.

#include <stdio.h>

int main(){
	
	float salario, novo_salario;
	
	printf("digite o valor do salario = ");
	scanf("%f", &salario);
	
	if(salario < 500){
		novo_salario =  salario + (salario * 30 / 100);
		
		printf("\n\n\nO funcionario tem direito ao aumento de salario.\n");
		printf("Novo salario com aumento de 30 porcento = %.2f", novo_salario);
	}else{
		printf("\n\n\nO funcionario nao tem direito ao aumento de salario.\n");
	}
	
	return 0;
}

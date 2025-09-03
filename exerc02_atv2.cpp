//Uma empresa decide dar um aumento de 30% aos funcionários cujo salário é inferiora 500
//reais. Escreva um programa que receba o salário de um funcionário e imprima o valor do
//salário reajustado ou uma mensagem caso o funcionário não tenha direito ao aumento.

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

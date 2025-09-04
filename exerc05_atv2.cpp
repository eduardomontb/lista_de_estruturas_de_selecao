//Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo com a seguinte regra:
//• salários até 300, reajuste de 50%;
//• salários maiores que 300, reajuste de 30%.

#include <stdio.h>

int main(){

	//declaração de variaveis
	float salario, novo_salario;

	//entrada de dados
	printf("Digite seu salario, para saber qual porcentagem de reajuste voce tem direito =  ");
	scanf("%f", &salario);

	//processamento de dados 
	//Estrutura condicional
	if (salario <= 300){
		novo_salario = 1.5 * salario; //calculo do reajuste do salario menor ou igual a 300
	
	printf("\n\n\nO salario de %.2f tem direito ao reajuste de 50 porcento.\n", salario);
	printf("Com o reajuste seu salario ficou = %.2f\n", novo_salario);
	}else {
	    novo_salario = 1.3 * salario; //calculo do reajuste do salario

	//saida de dados
	printf("\n\n\nO salario de %.2f tem direito ao reajuste de 30 porcento.\n", salario);
	printf("Com o reajuste seu salario ficou = %.2f\n", novo_salario);
}
	 return 0;
}

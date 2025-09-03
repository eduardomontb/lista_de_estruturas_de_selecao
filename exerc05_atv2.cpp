//Faça um programa que calcule e imprima o salário reajustado de um funcionário de acordo com a seguinte regra:
//• salários até 300, reajuste de 50%;
//• salários maiores que 300, reajuste de 30%.

#include <stdio.h>

int main(){
	
	float salario, novo_salario;
	
	printf("Digite seu salario, para saber qual porcentagem de reajuste voce tem direito =  ");
	scanf("%f", &salario);
	
	if (salario <= 300){
		novo_salario = 1.5 * salario;
	
	printf("\n\n\nO salario de %.2f tem direito ao reajuste de 50 porcento.\n", salario);
	printf("Com o reajuste seu salario ficou = %.2f\n", novo_salario);
	}else {
	    novo_salario = 1.3 * salario;
	 
	printf("\n\n\nO salario de %.2f tem direito ao reajuste de 30 porcento.\n", salario);
	printf("Com o reajuste seu salario ficou = %.2f\n", novo_salario);
}
	 return 0;
}

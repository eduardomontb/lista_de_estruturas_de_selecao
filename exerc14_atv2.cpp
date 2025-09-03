//Faça um programa que receba o código correspondente ao cargo de um funcionário e
//imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito seguindo a tabela:
//Código Cargo Percentual
//1 Escriturário 50,00%
//2 Secretário 35,00%
//3 Caixa 20,00%
//4 Gerente 10,00%
//5 Diretor Não tem aumento

#include <stdio.h>

int main(){
	
	// Declaração das variáveis
	int codigo, porcentual;
	
	//entrada de dados
	//Solicita ao usuário o código do cargo
	printf("Digite o codigo para saber o percentual de aumento do salario: ");
	scanf("%i", &codigo);
	
	// Estrutura condicional para determinar o cargo e o percentual de aumento
	if(codigo == 1){
		printf("\n\n\nCodigo: 1  /// Cargo: Escriturário /// Porcentual: 50");
	}else if(codigo == 2){
		printf("\n\n\nCodigo: 2 /// Cargo: Secretario /// Porcentual: 35");
	}else if(codigo == 3){
		printf("\n\n\nCodigo: 3 /// Cargo: Caixa /// Porcentual: 20");
	}else if(codigo == 4){
		printf("\n\n\nCodigo: 4 /// Cargo: gerente /// Porcentual: 10");
	}else if(codigo == 5){
		printf("\n\n\nCodigo: 5 /// Cargo: Diretor /// Porcentual: Nao tem aumento");
	}else{
		// Caso o usuário digite um código inválido
		printf("\nCodigo invalido!");
	}
	
	return 0;
}

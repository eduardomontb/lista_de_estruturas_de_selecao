//Fa�a um programa que receba o c�digo correspondente ao cargo de um funcion�rio e
//imprima seu cargo e o percentual de aumento ao qual este funcion�rio tem direito seguindo a tabela:
//C�digo Cargo Percentual
//1 Escritur�rio 50,00%
//2 Secret�rio 35,00%
//3 Caixa 20,00%
//4 Gerente 10,00%
//5 Diretor N�o tem aumento

#include <stdio.h>

int main(){
	
	// Declara��o das vari�veis
	int codigo, porcentual;
	
	//entrada de dados
	//Solicita ao usu�rio o c�digo do cargo
	printf("Digite o codigo para saber o percentual de aumento do salario: ");
	scanf("%i", &codigo);
	
	// Estrutura condicional para determinar o cargo e o percentual de aumento
	if(codigo == 1){
		printf("\n\n\nCodigo: 1  /// Cargo: Escritur�rio /// Porcentual: 50");
	}else if(codigo == 2){
		printf("\n\n\nCodigo: 2 /// Cargo: Secretario /// Porcentual: 35");
	}else if(codigo == 3){
		printf("\n\n\nCodigo: 3 /// Cargo: Caixa /// Porcentual: 20");
	}else if(codigo == 4){
		printf("\n\n\nCodigo: 4 /// Cargo: gerente /// Porcentual: 10");
	}else if(codigo == 5){
		printf("\n\n\nCodigo: 5 /// Cargo: Diretor /// Porcentual: Nao tem aumento");
	}else{
		// Caso o usu�rio digite um c�digo inv�lido
		printf("\nCodigo invalido!");
	}
	
	return 0;
}

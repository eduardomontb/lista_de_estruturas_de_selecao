//Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
//um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de permissão ou negação de acesso.

#include <stdio.h>
#include <string.h>

int main(){

	// Declara um vetor de caracteres
	char senha[10];

	
	printf("Digite a senha de CINCO letras = ");
	scanf("%9", senha); // Lê a string digitada

	// Compara a string digitada com a senha correta "ASDFG"
	if  (strcmp(senha, "ASDFG")){
		printf("Senha correta: Acesso concedido."); // Senha correta
	}else{
	    printf("Senha incorreta: Acesso negado."); // Senha incorreta
}    
	return 0;
}

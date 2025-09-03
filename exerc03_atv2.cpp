//Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha é
//um conjunto de caracteres que são: 'ASDFG'. O programa deve imprimir mensagem de permissão ou negação de acesso.

#include <stdio.h>
#include <string.h>

int main(){
	
	char senha[10];
	
	printf("Digite a senha de CINCO letras = ");
	scanf("%9", senha);
	
	if  (strcmp(senha, "ASDFG")){
		printf("Senha correta: Acesso concedido.");
	}else{
	    printf("Senha incorreta: Acesso negado.");
}    
	return 0;
}

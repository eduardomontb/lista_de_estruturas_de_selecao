//Faça um programa que receba um número, verifique se este número é par ou ímpar e imprima a mensagem.

#include <stdio.h>
#include <math.h>

int main(){

	//declaração de variaveis
	int numero, resto;

	//entrada de dados
	printf("Digite um numero = ");
	scanf("%i", &numero);

	//processamnteo de dados
	// calcula o resto da divisão do número por 2 usando a função fmod
    resto = fmod(numero, 2);

	//estrutura condicional
	//verifica se o número é par ou ímpar
    if (resto == 0){
    	printf("\n\n\nEsse numero e par.\n");
	}else{
	    printf("\n\n\nEsse numero e impar.\n");
    }
    
    printf("resto da divisao por 2 = %i", resto);
    return 0;
}

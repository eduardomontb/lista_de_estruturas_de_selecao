//Faça um programa que receba um número, verifique se este número é par ou ímpar e imprima a mensagem.

#include <stdio.h>
#include <math.h>

int main(){
	
	int numero, resto;
	
	printf("Digite um numero = ");
	scanf("%i", &numero);

    resto = fmod(numero, 2);
    
    if (resto == 0){
    	printf("\n\n\nEsse numero e par.\n");
	}else{
	    printf("\n\n\nEsse numero e impar.\n");
    }
    
    printf("resto da divisao por 2 = %i", resto);
    return 0;
}

//Faça um programa que receba a medida de um ângulo em graus, um número inteiro.
//Determine e imprima o quadrante em que se localiza este ângulo. Considere os quadrantes abaixo:

#include <stdio.h>

int main(){
	
	//declaracao de variaveis
	int angulo;
	
	//entrada de dados
	// Solicita ao usuário que digite o valor do ângulo
	printf("Digite o valor do angulo para saber em que quadrente ele se encontra :\n");
	scanf("%i", &angulo);
	
	
	//estrutura condicional para verificar qual quadrante o angulo se encontra
	if (angulo >= 0 && angulo <= 90){
		printf("\nEsse angulo esta no primeiro quadrante.");
	}else if(angulo > 90 && angulo <= 180){
		printf("\nEsse angulo esta no segundo quadrante.");
	}else if(angulo >180 && angulo <= 360){
		printf("\nEsse angulo esta no terceiro quadrante.");
	}else if(angulo < 0 && angulo >= -90){
		printf("\nEsse angulo esta no primeiro quadrante.");
	}else if(angulo < -90 && angulo >= -180 ){
		printf("\nEsse angulo esta no segundo quadrante.");
	}else if(angulo < -180 && angulo >= -270){
		printf("\nEsse angulo esta no terceiro quadrante.");
	}else {
        printf("Angulo fora do intervalo considerado.\n");
    }
	
	return 0;
}

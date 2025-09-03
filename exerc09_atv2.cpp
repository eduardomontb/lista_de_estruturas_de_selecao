//Faça um programa que receba o preço de um produto e o seu código de orígem e imprimaa sua procedência. A procedência obedece a seguinte tabela:
//Código Procedência
//1 Sul
//2 Norte
//3 Leste
//4 Oeste
//5 ou 6 Nordeste
//7.8 ou 9 Sudeste
//10 até 20 Centro-Oeste
//21 até 30 Nordeste

#include <stdio.h>

int main(){
	
	float preco;
	int codigo;
	
	printf("Digite o valor do produto = ");
	scanf("%f", &preco);
	
	printf("\nDigite o codigo de origem desse produto = ");
	scanf("%i", &codigo);
	
	if (codigo == 1){
		printf("Procedencia do produto : Sul");
	}else if (codigo == 2){
		printf("Procedencia d produto : Norte");
	}else if (codigo == 3){
		printf("Procedencia do produto : Leste");
	}else if (codigo == 4){
		printf("Procedencia do produto : Oeste");
    }else if (codigo == 5 || codigo == 6){
		printf("Procedencia do produto : Nordeste");
    }else if (codigo == 7 || codigo == 8 || codigo == 9){
		printf("Procedencia do produto : Sudeste");
    }else if (codigo >= 10 && codigo <= 20){
		printf("Procedencia do produto : Centro-Oeste");
    }else if (codigo >= 21 && codigo <= 30){
		printf("Procedencia do produto : Nordeste");
    }else{
    	printf("Codigo invalido!");
	}

 return 0;	
}

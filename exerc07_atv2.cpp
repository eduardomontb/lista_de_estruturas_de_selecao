//Fa�a um programa que receba a idade de um nadador e imprima a sua categoria seguindo as regras:
//categoria idade
//infantil A 5 � 7 anos
//infantil B 8 � 10 anos
//juvenil A 11 � 13 anos
//juvenil B 14 � 17 anos
//s�nior maiores de 18 anos

#include <stdio.h>

int main (){
	
	int idade;
	 
	printf("Digite sua idade = ");
	scanf("%i", &idade);
	
	
if (idade >= 18) {
        printf("Categoria: Senior\n");
    } else if (idade >= 14) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 11) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 8) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 5) {
        printf("Categoria: Infantil A\n");
    } else {
        printf("N�o possui idade suficiente.\n");
    }

	 return 0;  
}

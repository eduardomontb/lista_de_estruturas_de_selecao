//No curso de Desenvolvimento de Software, a nota final do estudante é calculada a partir de 
//3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral
//e a um exame final. As notas variam de 0 a 10 e a nota final é média ponderada das 3 notas
//mencionadas. A tabela a seguir fornece os pesos das notas:
//Laboratório - peso 2
//Av. Semestral - peso 3
//Exame final - peso 5
 
//Faça um programa que receba as 3 notas do estudante, calcule e imprima a
//média final e o conceito desse estudante.
//O conceito segue a tabela abaixo:
//média final conceito
//8.0 |__| 10.0 A
//7.0 |__ 8.0 B
//6.0 |__ 7.0 C
//5.0 |__ 6.0 D
//< 5.0 E

#include <stdio.h>


int main(){

	//declaração de varriaveis
	float n1, n2, n3, media_ponderada;

	//entrada de dados
	printf("Digite o valor da primeira nota = ");
	scanf("%f", &n1);
	
	printf("Digite o valor da segunda nota = ");
	scanf("%f", &n2);
	
	printf("Digite o valor da terceira nota = ");
	scanf("%f", &n3);

	//processamento de dados
	//calculo da media ponderada
	media_ponderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

	//mostra a media ponderada
	printf("\n\n\nA media ponderada de suas notas e = %.2f\n", media_ponderada);

	//estrutura condicional
    if (media_ponderada >= 8 && media_ponderada <= 10){
        printf("Conceito : A\n");
	}else if (media_ponderada >= 7){
        printf("Conceito : B\n");
	}else if (media_ponderada >= 6){
		printf("Conceito : C\n");
	}else if (media_ponderada >=5){
		printf("Conceito : D\n");
	}else {
		printf("Conceito : E\n");
	}
		 
	return 0;
	
	
}

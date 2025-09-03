//Faça um programa que receba quatro notas de um aluno, calcule e imprima a média aritmética
//das notas e a mensagem de aprovado para média superior ou igual a 7.0 ou a mensagem de
//reprovado para média inferior a 7.0.

#include <stdio.h>

int main(){

	//declaração de variavel
	float n1, n2, n3, n4, media;

	//entrada de dados
	printf("Digite o valor da primeira nota = ");
	scanf("%f", &n1);
	
	printf("Digite o valor da segunda nota = ");
	scanf("%f", &n2);
	
	printf("Digite o valor da terceira nota = ");
	scanf("%f", &n3);
	
	printf("Digite o valor da quarta a nota = ");
	scanf("%f", &n4);

	//processamento de dados
	media = (n1 + n2 + n3 + n4) / 4;

	// Estrutura condicional 
	if (media >= 7){
	   printf("\n\n\nAluno aprovado!!\n");
}	else{
	  printf("\n\n\nAluno reprovado\n");
}

	printf("Media do aluno = %.2f\n", media);
	 
   
 
 return 0;
 
}

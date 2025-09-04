#include <stdio.h>

int main(){

	//declaração de variantes
	float n1, n2, n3, media_aritmetica;

	//entrada de dados
	printf("digite o valor das tres notas\n");
	scanf("%f %f %f", &n1, &n2, &n3);

	//processamento de dados
	//calculo da media aritmetica
	media_aritmetica = (n1 + n2 + n3) / 3;

	//estrutura condicional
	if(media_aritmetica >= 7){
		printf("Aluno aprovado");
	}else if (media_aritmetica >= 5 ){
		printf("Exame");
	}else{
		printf("Aluno reprovado");
	}
	
	return 0;
	
}



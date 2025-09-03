#include <stdio.h>

int main(){
	
	float n1, n2, n3, media_aritmetica;
	
	printf("digite o valor das tres notas\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	media_aritmetica = (n1 + n2 + n3) / 3;
	
	if(media_aritmetica >= 7){
		printf("Aluno aprovado");
	}else if (media_aritmetica >= 5 ){
		printf("Exame");
	}else{
		printf("Aluno reprovado");
	}
	
	return 0;
	
}



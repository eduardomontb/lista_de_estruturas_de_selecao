//Efetuar a leitura de quatro n�mero e apresentar os n�meros que s�o divis�veis por 2 e 3.

#include <stdio.h>

int main(){
	
	// Declara��o das vari�veis
	int n1, n2, n3, n4;
	
	//entrada de dados
	printf("digite quatros numeros para saber qual deles e divisivel por 2 e 3 =");
	scanf("%i %i %i %i", &n1, &n2, &n3, &n4);
	
	// Verifica e imprime os n�meros divis�veis por 3
	printf("\n\nDivisiveis por 3 = ");
	
	if(n1 % 3 == 0){
		printf("\t%i", n1);
	}
	
	if(n2 % 3 == 0){
		printf("\t%i", n2);
	}
	
	if(n3 % 3 == 0){
		printf("\t%i", n3);
	}
	
	if(n4 % 3 == 0){
		printf("\t%i", n4);
	}
	
	// Verifica e imprime os n�meros divis�veis por 2
	printf("\n\nDivisiveis por 2 = ");

    if(n1 % 2 == 0){
		printf("\t%i", n1);
	}

    if(n2 % 2 == 0){
		printf("\t%i", n2);
	}

    if(n3 % 2 == 0){
		printf("\t%i", n3);
	}

    if(n4 % 2 == 0){
		printf("\t%i", n4);
	}

  return 0;
}

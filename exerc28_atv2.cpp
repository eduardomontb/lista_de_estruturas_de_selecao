//Verificar se dados tr�s valores inteiros quaisquer os mesmo formam um tri�ngulo. Se
//formar informar o tipo, caso contr�rio, informar que os lados n�o formam um tri�ngulo.

#include <stdio.h>

int main(){
	
	int n1, n2, n3;
	
	printf("Digite tres numeros inteiros, para saber se eles podem formam um triangulo =");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	if(n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1){
		
		printf("\nForma um triangulo\n");
		
		if(n1 == n2 && n1 == n3 ){
			
			printf("Tipo do triangulo : Equilatero.\n");
		}else if (n1 == n2 || n1 == n3 || n2 == n3){
		
			printf("Tipo do tringulo : Isosceles.\n");
		}else{
			
			printf("Tipo do triangulo : escaleno");
		}

	}else{
		
		printf("N�o forma tri�ngulo\n");
	}

 return 0;

}

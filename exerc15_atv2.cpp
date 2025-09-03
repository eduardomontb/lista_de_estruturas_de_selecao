//Fa�a um programa que mostre um menu com as seguintes op��es:
//� soma
//� raiz quadrada
//� finalizar
//O programa deve receber a op��o desejada, receber os dados necess�rios para a
//opera��o de cada op��o, realizar a opera��o e imprimir o resultado. Na op��o finalizar nada deve acontecer.

#include <stdio.h>
#include <math.h>

int main(){
	
	//Declara��o das vari�veis
	int menu, n1, n2, resultado_soma;
	double n3, resultado_raiz;

    //Exibe o menu da calculadora
	printf("Calculadora\n\n");
	
	printf("1 - Soma\n");
	printf("2 - Raiz quadrada\n");
	printf("3 - Finalizar\n");
	
	//entrada de dados
	//solicita ao usu�rio a escolha do menu
	printf("\nDigite a opcao escolhida do menu de opcoes: ");
	scanf("%d", &menu);
	
	//processamento de dados
	//estrutura condicional para verificar a escolha
	if(menu == 1){
		printf("\nOpcao escolhida: SOMA");
		printf("\nDigite o valor do primeiro numero = ");
	    scanf("%i", &n1);
	    
	    printf("Digite o valor do segundo numero = ");
	    scanf("%d", &n2);
	    
	    
	    resultado_soma = n1 + n2; // Calcula a soma
	    
	    printf("Resultado da opera�ao = %i", resultado_soma);
		
	}else if (menu == 2){
		printf("\nOpcao escolhida: Raiz quadrada");
		printf("\nDigite um numero para saber sua raiz quadrada = ");
		scanf("%lf", &n3);
		
		resultado_raiz = sqrt(n3); // Calcula a raiz quadrada
		
	    printf("\nResultado da opera�ao = %.2lf", resultado_raiz);	
	
	}else if (menu == 3){
		printf("\nPrograma finalizado."); // Finaliza o programa
	} else {
		printf("\nNumero invalido."); // Caso o usu�rio digite um n�mero inv�lido
	}
	  
	
	return 0;
}

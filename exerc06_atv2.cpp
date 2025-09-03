//Fa�a um programa que receba a altura e o sexo de uma pessoa, calcule e imprima o seu peso ideal, utilizando as seguintes f�rmulas:
//� para homens: (72.7 * H) - 58;
//� para mulheres: (62.1 * H) � 44.7.

#include <stdio.h>
#include <string.h>

int main(){


  // Declara��o das vari�veis
  float altura, peso_ideal;
  char sexo;
  
  //entrada de dados
  // Solicita ao usu�rio a altura
  printf("Digite seu altura = ");
  scanf("%f", &altura);
  
  // Solicita ao usu�rio o sexo
  printf("Digite seu peso = ");
  scanf("%1s", &sexo);
  
  
  //processamento de dados
  // Estrutura switch para verificar o sexo informado
  switch(sexo){
  	case 'M' :
  	case 'm' :
  		
  		// Calcula peso ideal para homens
  	 peso_ideal = (72.7 * altura) - 58;
  	    printf("Sexo : Masculino");
	    break;
  	
	case 'F' :
	case 'f' :
		
		// Calcula peso ideal para mulheres
	 peso_ideal = (62.1 * altura) - 44.7;
	 printf("Sexo : Feminino");
  }
  	
  	// Exibe o peso ideal calculado
	printf("\n\n\no peso ideal dessa pessoa e = %.2f\n", peso_ideal);   
  
}

  
  
  

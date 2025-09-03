#include <stdio.h>

int main(){
	
	//declaracao de variaveis
	float horas, horas_extras_h, horas_falta_h;
	int horas_extras_min, horas_falta_min;
    int premio;
	
	//entrada de dados
	// Solicita ao usuário o número de horas extras trabalhad
	printf("Digite o numero de horas extras trabalhadas: ");
	scanf("%d", &horas_extras_min);
	
	// Solicita ao usuário o número de horas de falta
	printf("Digite o numero de horas que o funcionario faltou: ");
	scanf("%d", &horas_falta_min);
	
	
	// Converte minutos em horas
	horas_extras_h = horas_extras_min / 60.0;
   
    horas_falta_h = horas_falta_min / 60.0;

	horas = (horas_extras_min) - (2.0 / 3.0 * horas_falta_min );
	
	// Define o prêmio com base no valor de H
	if(horas >= 240 ){
		premio = 500;
	}else if (horas >= 180 ){
	    premio = 400;
	}else if (horas >=120 ){
		premio = 300;
	}else if (horas >= 60 ){
		premio = 200;
	}else{
		premio = 100;
	}

	// Exibe os resultados
	printf("\nHoras extras em horas: %.2f", horas_extras_h);
    printf("\nHoras falta em horas: %.2f", horas_falta_h);
    printf("\nValor do premio: R$ %d\n", premio);

	
	return 0;
}

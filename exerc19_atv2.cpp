
#include <stdio.h>

int main(){
	 
	//declaracao de variaveis
	float salario_min, horas_trabalhadas, horas_extras;
	float valor_dependentes, valor_hora_trabalhada, valor_hora_extra;
	float salario_mes, salario_bruto, salario_liquido, imposto, gratificacao, salario_rec;
	int num_dependentes;

    //entrada de dados
    printf("Digite o valor do salario minimo = ");
    scanf("%f", &salario_min);
    
    printf("Digite total de horas trabalhadas = ");
    scanf("%f", &horas_trabalhadas);
    
    printf("Digite o total de horas extras trabalhadas = ");
    scanf("%f", &horas_extras);
    
    printf("Digite o numero de dependentes = ");
    scanf("%i", &num_dependentes);
    
    //processamento de dados
    valor_hora_trabalhada =  salario_min / 5.0;
    
    salario_mes = horas_trabalhadas * valor_hora_trabalhada;
    
    valor_dependentes = num_dependentes * 32;  
    
    valor_hora_extra = horas_extras * (valor_hora_trabalhada * 1.5);
    
    salario_bruto = salario_mes + valor_dependentes + valor_hora_extra;
    
    // Calcula o imposto de renda conforme tabela
    if (salario_bruto <= 200){
    	imposto = 0;
	}else if (salario_bruto <= 500){
        imposto = salario_bruto * 0.1;
	}else if (salario_bruto > 500){
		imposto = salario_bruto * 0.2;
	}
	
	// Calcula o salário líquido 
	salario_liquido = salario_bruto - imposto;
	
	// Calcula a gratificação conforme o salário líquido
	if(salario_liquido <= 350){
		gratificacao = 100;
	}else{
		gratificacao = 50;
	}

    salario_rec = salario_liquido + gratificacao;
    
    // Calcula o salário final a receber 
    printf("\nSalario do mes: R$ %.2f", salario_mes);
    printf("\nValor dos dependentes: R$ %.2f", valor_dependentes);
    printf("\nValor das horas extras: R$ %.2f", valor_hora_extra);
    printf("\nSalario bruto: R$ %.2f", salario_bruto);
    printf("\nImposto de renda: R$ %.2f", imposto);
    printf("\nSalario liquido: R$ %.2f", salario_liquido);
    printf("\nGratificacao: R$ %.2f", gratificacao);
    printf("\nSalario a receber: R$ %.2f\n", salario_rec);
    
    return 0;

}

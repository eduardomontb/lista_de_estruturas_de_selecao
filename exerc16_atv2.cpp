//Uma companhia de seguros tem três categorias de seguros baseadas na idade e na
//ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
//podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três
//grupos de risco. A tabela a seguir fornece as categorias em função da caixa de idade e do grupo de risco:

//Faça um programa que receba a idade e o grupo de risco (b, m ou a) e determine e imprima o código do seguro.

#include <stdio.h>

int main(){
	
	//Declaração das variáveis
	int idade;
	char risco;
	int codigo = 0;

	//Entrada de dados
	// Solicita a idade do usuário
	printf("\nDigite sua idade (18 a 70 anos) : ");
	scanf("%i", &idade);
	
	// Verifica se a idade está fora do intervalo permitido
	if (idade < 18 || idade > 70) {
    printf("\n\nNao pode fazer seguro.\n");

}
    // Solicita o grupo de risco do usuário
	printf("\nQual seu grupo de risco (BAIXO = b / MEDIO = m / ALTO = a) : ");
	scanf(" %c", &risco);
	
	
    // Verifica a faixa etária e atribui o código de seguro de acordo com o grupo de risco
	if (idade >= 18 && idade <= 24) {
        if (risco == 'b') printf("Codigo do seguro: 7\n");
        else if (risco == 'm') printf("Codigo do seguro: 8\n");
        else if (risco == 'a') printf("Codigo do seguro: 9\n");
        else printf("Grupo de risco invalido!\n");
    } 
    else if (idade >= 25 && idade <= 40) {
        if (risco == 'b') printf("Codigo do seguro: 4\n");
        else if (risco == 'm') printf("Codigo do seguro: 5\n");
        else if (risco == 'a') printf("Codigo do seguro: 6\n");
        else printf("Grupo de risco invalido!\n");
    } 
    else {
        if (risco == 'b') printf("Codigo do seguro: 1\n");
        else if (risco == 'm') printf("Codigo do seguro: 2\n");
        else if (risco == 'a') printf("Codigo do seguro: 3\n");
        else printf("Grupo de risco invalido!\n");
    }
	
	return 0;
}

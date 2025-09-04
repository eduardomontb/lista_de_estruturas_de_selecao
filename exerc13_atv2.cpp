#include <stdio.h>

int main() {
    
    //declaraçao  de variaveis
	int idade;

    //entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);

	//estrutura condicional
    if (idade <= 2) {
        printf("Recém-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Criança\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    
    //declara�ao  de variaveis
	int idade;

    //entrada de dados
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 2) {
        printf("Rec�m-nascido\n");
    } else if (idade >= 3 && idade <= 11) {
        printf("Crian�a\n");
    } else if (idade >= 12 && idade <= 19) {
        printf("Adolescente\n");
    } else if (idade >= 20 && idade <= 55) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}

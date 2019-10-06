#include <stdio.h>
#include <stdlib.h>

/* 

	switch(variável){
		case constante1:
			comandos;
			break;
		case constante2:
			comandos;
			break;
			.
			.
			.
		default:
			comandos;
	}
 */

//Conversor de base numerica: decimal > hexadecimal e vice-versa
int main(int argc, char *argv[]) {
	
	int opcao,valor;
	
	printf("Converter: \n");
	printf("1: decimal para hexadecimal\n");
	printf("2: hexaecimal para decimal\n");
	printf("\n\nInforme a sua opcao: ");
	scanf("%d",&opcao);
	getchar();
	
	switch(opcao){
		case 1:
			printf("\nInforme o valor em decimal: ");
			scanf("%d",&valor);
			getchar();
			printf("\n%d em hexadecimal eh: %x\n", valor,valor);
			break;
		case 2:
			printf("\nInforme o valor me hexadecimal: ");
			scanf("%x",&valor);
			getchar();
			printf("\n%x em decimal eh: %d\n", valor,valor);
		default:
			printf("\nOpcao invalida\n");
	}//end switch
	
	system("PAUSE");
	return 0;
}

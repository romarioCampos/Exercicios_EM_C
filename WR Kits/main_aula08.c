#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcao;
	int valor;
	
	printf("Conversor Bases Numericas\n");
	printf("1: decimal pra hexadecimal\n");
	printf("2: hexadecimal para decimal\n");
	printf("\n\nInforme a opcao: ");
	scanf("%d",&opcao);
	getchar();
	
	if (opcao == 1){
		printf("Informar o valor em decimal: ");
		scanf("%d", &valor);
		getchar();
		printf("%d em hexadecimal eh: %x\n", valor,valor);
	}
	
	else if(opcao == 2){
		printf("Informar o valor em hexadecimal: ");
		scanf("%x",&valor);
		getchar();
		printf("%x em decimal eh: %d\n", valor,valor);
	}
	
	else{
		printf("Sua opção é inválida.\n");
	}
	
	system("PAUSE");
	return 0;
}

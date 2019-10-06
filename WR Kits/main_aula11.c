/* 

	Sistema de banco de dados simples
	Seleciona vendedores por região

 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(void) {
	
	char regiao, vendedor;
	
	printf("Regioes: Leste, Oeste, Norte e Sul\n");
	printf("Informe a primeira letra da regiao: ");
	regiao = getche(); 	// semelhante a função scanf
						// lê o comando do teclado
	regiao = touper(regiao);	//converte as letra digitadas pelo usuario me maiusculas
	printf("\n");
	
	switch(regiao)
	{
		case 'L':
			printf("Vendedores: Ricardo, Jose, Mariana e Paula\n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
			{
				switch(vendedor)
				{
					case 'R':
						printf("Vendas: R$%d\n", 5000);
						break;
					case 'J':
						printf("Vendas: R$%d\n", 15000);
						break;
					case 'M':
						printf("Vendas: R$%d\n", 18000);
						break;
					case 'P':
						printf("Vendas: R$%d\n", 25000);
						break;
				}// end switch aninhado
			}
		break;
		
		case 'O':
			printf("Vendedores: Rafael, Joana, Mario e Paulo\n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
			{
				switch(vendedor)
				{
					case 'R':
						printf("Vendas: R$%d\n", 2000);
						break;
					case 'J':
						printf("Vendas: R$%d\n", 8000);
						break;
					case 'M':
						printf("Vendas: R$%d\n", 18000);
						break;
					case 'P':
						printf("Vendas: R$%d\n", 9000);
						break;
				}// end switch aninhado
			}
		break;
		
		case 'N':
			printf("Vendedores: Roberto, Jeferson, Murilo e Pedro\n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
			{
				switch(vendedor)
				{
					case 'R':
						printf("Vendas: R$%d\n", 3000);
						break;
					case 'J':
						printf("Vendas: R$%d\n", 6000);
						break;
					case 'M':
						printf("Vendas: R$%d\n", 1000);
						break;
					case 'P':
						printf("Vendas: R$%d\n", 13000);
						break;
				}// end switch aninhado
			}
		break;
		
		case 'S':
			printf("Vendedores: Robert, Joeliton, Marion e Paolo\n");
			printf("Informe a primeira letra do vendedor: ");
			vendedor = toupper(getche());
			printf("\n");
			{
				switch(vendedor)
				{
					case 'R':
						printf("Vendas: R$%d\n", 12000);
						break;
					case 'J':
						printf("Vendas: R$%d\n", 5000);
						break;
					case 'M':
						printf("Vendas: R$%d\n", 18700);
						break;
					case 'P':
						printf("Vendas: R$%d\n", 15200);
						break;
				}// end switch aninhado
			}
		break;
		
	}//end switch
	
	system("PAUSE");
	return 0;
}

//--- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

//--- Prototipo das Funções Auxiliares ---
void funcao1();
void funcao2();

// -- Variaveis Globais --
int counter;//Variavel Global para Contagem

//---- Função Principal ---
int main(int argc, char *argv[]) {
	
		
	counter = 200;
	
	funcao1();
	
	system("PAUSE");
	return 0;
}// end main

//--- Desenvolvimento das Funções Axuliares ---
void funcao1()
{
	funcao2();
	
	printf("\n\nO Valor de counter eh: %d\n\n", counter);// imprimir o valor 200
	
}//end funcao1

void funcao2()
{
	int counter;
	
	for(counter = 1; counter < 20; counter++) printf("-");
		
}//end funcao2

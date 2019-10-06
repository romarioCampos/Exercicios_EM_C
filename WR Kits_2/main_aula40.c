#include <stdio.h>
#include <stdlib.h>

/* Regras de Escopo, Variaveis Locais*/

// -- Prototipo da fun��o, 
void function();

//---Variav�is Globais ----
int x, y,z;

// -- Fun��o Principal ---
int main(int argc, char *argv[]) {
	
	int a, b, c, d; // variaveis locais da fun��o "main"
	
	a = 100;
	b = 200;
	c = 300;
	d = 400;
	
	printf("Na funcao main, a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d);
	
	function();
	
	system("PAUSE");
	return 0;
}// end main

//--- Desenvolvimento da Fun��o Auxiliar ----
void function()
{
	int a, b, c, d;//Variaveis Locais da fun��o "function"
	
	a = 88;
	b = 44;
	c = 55;
	d = 66;
	
	if(a < b)
	{
		int z = 30;
		
		printf("Z = %d\n\n", z);
	}
	
	printf("Na funcao 'function', a = %d, b = %d, c = %d, d = %d\n\n", a,b,c,d);
	
}//end funtion

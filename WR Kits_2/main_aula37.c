#include <stdio.h>
#include <stdlib.h>

/*

	Fun��es que retornam valores inteiros
	void
	
	tipo nome(parametros)
	
	nome(parametros)

*/

//-- Prototipos das Fun��es Auxiliares ---
int soma(int num1, int num2);
int subt(int num1, int num2);
int mult(int num1, int num2);
int divi(int num1, int num2);

// --- Fun��o Principal ---
int main(int argc, char *argv[]) {
	
	int resultado_soma = soma(8,7);
	int resultado_subt = subt(8,7);
	int resultado_mult = mult(6,11);
	int resultado_divi = divi(80,4);
	
	printf("Soma: %d\n", resultado_soma);
	printf("Subtracao: %d\n", resultado_subt);
	printf("Multiplicacao: %d\n", resultado_mult);
	printf("Divisao: %d\n", resultado_divi);
	
	system("PAUSE");
	return 0;
}//end main

// --- Desenolvimento das Fun��es Auxiliares -----
int soma(int num1, int num2)
{
	return (num1 + num2);
}//end soma

int subt(int num1, int num2)
{
	return(num1 - num2);
}//end subt

int mult(int num1, int num2)
{
	return(num1 * num2);
}//end mult

int divi(int num1, int num2)
{
	return(num1 / num2);
}//end divi

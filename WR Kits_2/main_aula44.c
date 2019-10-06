//--- Bibliotecas Utilizadas ----
#include <stdio.h>
#include <stdlib.h>

//---Prototipo da Fun��o Auxiliar ---
unsigned long fatorial(int num);//Fun��o para o Fatorial de um Numero Inteiro

//--- Fun��o Principal ----
int main(int argc, char *argv[]) {
	
	unsigned long fat;
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	getchar();
	
	fat = fatorial(num);
	
	printf("O fatorial de %d eh %ld\n", num, fat);
	
	system("PAUSE");
	return 0;
}//end main

//--- Desenvolvimento da Fun��o Auxiliar ---
unsigned long fatorial(int num)
{
	unsigned long result;
	
	if((num == 1) || (num == 0)) return (1);
	
	result = num * fatorial(num - 1);
	
	return (result);
}//end fatorial

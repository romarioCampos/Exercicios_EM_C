//--- Bibliotecas Utilizadas ----
#include <stdio.h>
#include <stdlib.h>

//---Prototipo da Função Auxiliar ---
unsigned long fatorial(int num);//Função para o Fatorial de um Numero Inteiro

//--- Função Principal ----
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

//--- Desenvolvimento da Função Auxiliar ---
unsigned long fatorial(int num)
{
	unsigned long result;
	
	if((num == 1) || (num == 0)) return (1);
	
	result = num * fatorial(num - 1);
	
	return (result);
}//end fatorial

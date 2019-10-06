//--- Bibliotecas Utilizadas ---
#include <stdio.h>
#include <stdlib.h>

//--- Prototipo das Funções Auxiliares -----
void change(int *x, int *y);

// --- Função Principal ---
int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	getchar();
	printf("Digitar outro numero: ");
	scanf("%d", &num2);
	getchar();
	
	printf("Os Valores Iniciais num1 = %d e num2 = %d\n\n", num1, num2);
	
	change(&num1, &num2);
	
	printf("Os Valores Modificados num1 = %d e num2 = %d\n\n", num1, num2);
	
	system("PAUSE");
	return 0;
}//end main

//---- Desenvolvimento das Funções Auxiliares ----
void change(int *x, int *y)
{
	int temp;
	
	temp = *x;//salvando o conteudo armazenadono endereço apontado por x
	*x = *y;//armazena o conteudo de x em y;
	*y = temp;//armazena o conteudo original de x em y
}//end change

#include <stdio.h>
#include <stdlib.h>

// Exemplo3

// Utilizar fun��es

// Programa que calcule o quadrado de numeros inteiros

// Solicita oa usuario numeros inteiros e vai retornando os quadrado dos mesmo

// Condi��o para encerrar o programa: digitar o numero 0

// Utilizando o la�o for

// Fun��es auxiliares:

void display();
int leitura();
void square();

int main(int argc, char *argv[]) {
	
	int valor;
	
	for(display(); valor = leitura(); display())
	{
		square(valor);
	}
	
	system("PAUSE");
	return 0;
} //end main

void display()
{
	printf("Digite zero para sair\n");
	printf("Ou informe um inteiro para calcularo seu quadrado: ");
} //end display

int leitura()
{
	int t; // Armazena o numero digitado pelo usuario para calcular o seu quadrado
	scanf("%d", &t); // Le o que foi digitado no teclado
	return t;
} //end leitura

void square(int numero)
{
	printf("%d\n", numero * numero); //Imprimi o quadrado do numero
} //end square

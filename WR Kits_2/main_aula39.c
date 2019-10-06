#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Fun��es que retornam ponteiros*/

// --- Protipo da Fun��o Auxiliar ---
char *findCharactere(char caractere, char *str);

// --- Fun��o Principal ----
int main(int argc, char *argv[]) {
	
	char frase[80];
	char chr, *pointer;
	
	printf("Digite uma frase: ");
	gets(frase);
	printf("\nDigite um caractere: ");
	
	chr = getche();
	pointer = findCharactere(chr, frase);
	
	if(pointer) printf("\n\n%s\n\n", pointer);//Se encontrar correspond�ncia, imprimi a frase a partir dela
	else printf("\n\nNenhuma paridade\n\n");
	
	system("PAUSE");
	return 0;
}//end main

// --- Desenvolvimento da Fun��o Auxiliar ----
char *findCharactere(char caractere, char *str)
{
	int counter = 0;
	
	while((caractere != str[counter]) && (str[counter] != '\0')) counter++;
	
	if(str[counter]) return (&str[counter]); // Se houver correspod�ncia, retornar o ponteiro para a localiza��o
	
	else return (char *) '\0'; //Sen�o retorna um ponteiro nulo
}//end function

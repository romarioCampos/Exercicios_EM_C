#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415926535

/* Funções que retornam valores não inteiros */

/* double nome(parametros....)*/

// -- Prototipos Auxiliares das Funções --
float teste(float numero);
float area_circulo(float raio);

// -- Função Principal --

// -- Usuario Informa o Valor do Raio --
int main(int argc, char *argv[]) {
		
	float raio_usuario, resultado;
	
	printf("INFORME O VALOR DO RAIO: ");
	scanf("%f", &raio_usuario);
	getchar();
	
	resultado = area_circulo(raio_usuario);
	
	printf("A area eh: %f\n", resultado);
	
	system("PAUSE");
	return 0;
}// end main

// -- Função Auxiliares --
float teste(float numero)
{
	float retornar;
	
	retornar = numero;
	
	return retornar;
}//end teste

float area_circulo(float raio)
{
	//area do circulo = pi.R^²
	//return pi*raio*raio;
	
	return pi*pow(raio,2);
}//end area_circulo

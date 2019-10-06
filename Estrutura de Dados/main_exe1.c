#include <stdio.h>

void main(){
	int m[5][5],i,j;
	printf("Matriz de 5x5 Nos. inteiros\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("\nDigite m[%d][%d]: ", i,j);
			scanf("%d", &m[i][j]);
		}
	}
	system("cls");
	printf("Matriz de 5x5 de inteiros: \n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\n\nMatriz sem a diagonal principal\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(i!=j) { printf("%d\t", m[i][j]); }
				else{ printf("\t"); }
		}
	}
}

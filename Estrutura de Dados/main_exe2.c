#include <stdio.h>
#define MAX 100
main()
{
  int m, n, nb, p, i, j, k;
  int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX]	;
  printf("Produto de duas matrizes Amxn e Bnb x p....\n\n");
  printf("\nDigite o no de linhas de A(< 100): ");
  scanf("%d",&m);
  printf("\nDigite o no de colunas de A(< 100): ");
  scanf("%d",&n);
  printf("\n\nCarregando a matriz A: ");
  for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	  printf("\nDigite A[%d][%d]: ",i,j);	
	  scanf("%d",&A[i][j]);
	}	
  }  
  printf("\nDigite o no de linhas de B (< 100): ");
  scanf("%d",&nb);
  printf("\nDigite o no de colunas de B(< 100): ");
  scanf("%d",&p);
  if(nb!=n){ printf("\n\nNao existe o produto da Matriz A por B"); }
  else{ 
    printf("\n\nCarregando a matriz B: ");
    for(i=0;i<nb;i++){
	  for(j=0;j<p;j++){
	    printf("\nDigite B[%d][%d]: ",i,j);	
	    scanf("%d",&B[i][j]);
	  }	
    }  
  }    
  //Cálculo do Produto
  for(i=0;i<m;i++){
	for(j=0;j<n;j++){
	  C[i][j] = 0;
	  for(k=0;k<n;k++){
	  	C[i][j] += A[i][k]*B[k][j]; 
	  }		
	}
  }
  system("cls");
  printf("MATRIZ PRODUTO de AxB:\n\n");
  for(i=0;i<m;i++){
	for(j=0;j<p;j++){
	  printf("%d\t",C[i][j]);
	}
	printf("\n");
  } 
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {

    int i,resposta,aleatorio,contador=0,verifica=0,teste; //declara��o das vari�veis
    aletorio = (rand() % 128) + 32; //Gerando n�mero aleat�rio entre 32 e 128

    while(verifica == 0){ //Repetindo a fun��o enquanto o jogador n�o acertar
            contador++; //conta o n�mero de tentativas

            printf("Digite um n�mero: ");
            scanf("%d",&resposta);
            teste = resposta - aleatorio;

            if(teste >= 64 || teste <= -64){ //verifica se � maior que 64

                printf("*");

            for(i=0;i<1;i++){

                    printf("\a");
            }

            }else if(teste >= 32 || teste <= -32){ // verifica se � maior que 32

            printf("**");

            for(i=0;i<2;i++){

                    printf("\a");
            }

            }else if(teste >= 16 || teste <= -16){

                printf("***");

                for(i=0;i<3;i++){

                        printf("\a");
                }

                }else if(teste >= 8 || teste <= -8){

                    printf("****");

                    for(i=0;i<4;i++){

                            printf("\a");
                    }

                    }else if(teste >=4 || teste <= -4){

                        printf("*****");

                        for(i=0;i<5;i++){

                                printf("\a");
                        }

                        }else if(teste >= 2 || teste <= -2){

                            printf("******");

                            for(i=0;i<6;i++){

                                    printf("\a");
                            }

                            }else if(teste == 1 || teste == -1){

                                printf("*******");

                                for(i=0;i<7;i++){

                                        printf("\a");
                                }

                                }else{

                                    printf("O jogador venceu com %d tentativas",contador);

                                    verifica = 1; //condi��o para parar o jogo

                                    }

                                    }

}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main() {

    int i,resposta,aleatorio,contador=0,verifica=0,teste; //declaração das variáveis
    aletorio = (rand() % 128) + 32; //Gerando número aleatório entre 32 e 128

    while(verifica == 0){ //Repetindo a função enquanto o jogador não acertar
            contador++; //conta o número de tentativas

            printf("Digite um número: ");
            scanf("%d",&resposta);
            teste = resposta - aleatorio;

            if(teste >= 64 || teste <= -64){ //verifica se é maior que 64

                printf("*");

            for(i=0;i<1;i++){

                    printf("\a");
            }

            }else if(teste >= 32 || teste <= -32){ // verifica se é maior que 32

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

                                    verifica = 1; //condição para parar o jogo

                                    }

                                    }

}

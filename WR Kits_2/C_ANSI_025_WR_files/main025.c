/*
   Sistema de Busca de Componentes em Linguagem C ANSI
   
   Eng. Wagner Rambo
   
   Maio de 2015
   
   Curso de Linguagem C
   
   
   WR Kits

*/

// --- Bibliotecas Auxiliares ---
#include <stdio.h>
#include <stdlib.h>

// --- Protótipo das Funções Auxiliares ---
int check(char *s);
void take_component();

// --- Variáveis Globais ---
char databank[][40] = { //Matriz contendo os componentes e respectivas características
                        "BC547"   ,"TBJ NPN 625mW",
                        "BC557"   ,"TBJ PNP 625mW",
                        "TIP41"   ,"TBJ NPN 65W",
                        "TIP42"   ,"TBJ PNP 65W",
                        "TIP122"  ,"TBJ NPN Darlington 100V 5A",
                        "TIP127"  ,"TBJ PNP Darlington 100V 5A",
                        "2N2222"  ,"TBJ NPN High Frequency 500mW",
                        "2N7000"  ,"Mosfet N channel",
                        "IRF3205" ,"Mosfet N channel 55V 98A",
                        };
                        
char input[80];         //Matriz para entrada de dados (componente em pesquisa)
char component[80];     //Matriz passada como parâmetro para função check
char *point;            //Ponteiro



// --- Função Principal ---
int main()
{
     int indice;                                               //Armazena o índice do componente
     char option;                                              //Armazena a opção escolhida           
     
  do                                                           //Loop
  {
     printf("Informe o componente que deseja pesquisar: ");    //solicita que o usuário pesquise um componente
     gets(input);                                              //lê o componente digitado pelo usuário
     point = input;                                            //atribui a point o endereço da matriz input
     printf("Caracteristas do componente pesquisado: ");
     take_component();                                         //pega o primeiro componente
     
     
     //Loop pra ler um componente por vez da matriz input e exibe suas características. 
     do
     {
        //procura o índice do componente em databank
        indice = check(component);
        
        //imprime as características do componente pesquisado
        if(indice!= -1) printf("%s", databank[indice+1]);
        else printf("Sem registros no banco de dados \n");
        
        
        
        take_component();                                     //Pega próxima palavra    
            
            
     }while(*component);                                      //repete até encontrar uma string nula
  
    
    
    printf("\n");                                             //Quebra de linha
    
    printf("Pesquisar mais? s - sim | n - nao \n");           //Pergunta se o usuário quer pesquisar mais
    scanf("%c",&option);                                      //Armazena a opção escolhina em option
    getchar();                                                //Limpa o buffer do teclado
  
  
  
  }while(option == 's' || option == 'S');
  
  
  system("PAUSE");	
  return 0;
} //end main



// --- Desenvolvimento das Funções Auxiliares
int check(char *s)                           //Retorna a localização de uma correspondência entre a string apontada pelo parâmetro s e a matriz databank.
{
   int i;                                    //Variável de iterações
   
   for(i=0; *databank[i]; i++)               //Varre a matriz databank
   {
       if(!strcmp(databank[i],s)) break;     //Comparação das matrizes databank e s   
            
   } //end for 
   
   if(*databank[i]) return(i);               //Retorna o índice corresponde, se uma correspondência existir
   else return(-1);                          //Retorna -1 se não houver uma correspondência
    
} //end check


/*
   take_component lê o próximo componente da matriz input. Cada componente é
   considerado como sendo separado por um espaço ou pelo terminador nulo.
   Nenhuma outra pontuação é permitida.
   O componente retornado será uma string de tamanho nulo quando o final
   da string input é encontrado.

*/
void take_component()
{
     char *q; //ponteiro auxiliar
     
     //Recarrega o endereço do componente toda vez que a função é chamada.
     q = component; 
     
     //pega o próximo componente
     while(*point && *point!=' ')         //Shift no endereço dos índices da matriz databank
     {
        *q = *point;
        point++;
        q++;          
                  
     } //end while
     
     if(*point == ' ') point++;
     *q = '\0';                          //terminador nulo
     
} //end take_component






















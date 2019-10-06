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

// --- Prot�tipo das Fun��es Auxiliares ---
int check(char *s);
void take_component();

// --- Vari�veis Globais ---
char databank[][40] = { //Matriz contendo os componentes e respectivas caracter�sticas
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
char component[80];     //Matriz passada como par�metro para fun��o check
char *point;            //Ponteiro



// --- Fun��o Principal ---
int main()
{
     int indice;                                               //Armazena o �ndice do componente
     char option;                                              //Armazena a op��o escolhida           
     
  do                                                           //Loop
  {
     printf("Informe o componente que deseja pesquisar: ");    //solicita que o usu�rio pesquise um componente
     gets(input);                                              //l� o componente digitado pelo usu�rio
     point = input;                                            //atribui a point o endere�o da matriz input
     printf("Caracteristas do componente pesquisado: ");
     take_component();                                         //pega o primeiro componente
     
     
     //Loop pra ler um componente por vez da matriz input e exibe suas caracter�sticas. 
     do
     {
        //procura o �ndice do componente em databank
        indice = check(component);
        
        //imprime as caracter�sticas do componente pesquisado
        if(indice!= -1) printf("%s", databank[indice+1]);
        else printf("Sem registros no banco de dados \n");
        
        
        
        take_component();                                     //Pega pr�xima palavra    
            
            
     }while(*component);                                      //repete at� encontrar uma string nula
  
    
    
    printf("\n");                                             //Quebra de linha
    
    printf("Pesquisar mais? s - sim | n - nao \n");           //Pergunta se o usu�rio quer pesquisar mais
    scanf("%c",&option);                                      //Armazena a op��o escolhina em option
    getchar();                                                //Limpa o buffer do teclado
  
  
  
  }while(option == 's' || option == 'S');
  
  
  system("PAUSE");	
  return 0;
} //end main



// --- Desenvolvimento das Fun��es Auxiliares
int check(char *s)                           //Retorna a localiza��o de uma correspond�ncia entre a string apontada pelo par�metro s e a matriz databank.
{
   int i;                                    //Vari�vel de itera��es
   
   for(i=0; *databank[i]; i++)               //Varre a matriz databank
   {
       if(!strcmp(databank[i],s)) break;     //Compara��o das matrizes databank e s   
            
   } //end for 
   
   if(*databank[i]) return(i);               //Retorna o �ndice corresponde, se uma correspond�ncia existir
   else return(-1);                          //Retorna -1 se n�o houver uma correspond�ncia
    
} //end check


/*
   take_component l� o pr�ximo componente da matriz input. Cada componente �
   considerado como sendo separado por um espa�o ou pelo terminador nulo.
   Nenhuma outra pontua��o � permitida.
   O componente retornado ser� uma string de tamanho nulo quando o final
   da string input � encontrado.

*/
void take_component()
{
     char *q; //ponteiro auxiliar
     
     //Recarrega o endere�o do componente toda vez que a fun��o � chamada.
     q = component; 
     
     //pega o pr�ximo componente
     while(*point && *point!=' ')         //Shift no endere�o dos �ndices da matriz databank
     {
        *q = *point;
        point++;
        q++;          
                  
     } //end while
     
     if(*point == ' ') point++;
     *q = '\0';                          //terminador nulo
     
} //end take_component






















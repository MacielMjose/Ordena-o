#include <stdio.h>
#include <conio.h>
#define N_MAX   100 //define quantidade maxima de registros aceitos

typedef struct { // registro para uma pessoa       
   int  codigo;       
   char nome[30];
}INFORMACAO;   
    
typedef struct {       
   INFORMACAO info[N_MAX]; // dados do registro       
   int f; // número de registro(s) ocupado(s)
}NODO; // estrutura do tipo NODO

void ordena_lista (NODO *lista); // ordena registros por código - ordem crescente
void inclui_inicio ( NODO *lista ); // inclui um novo registro no in�cio da lista (posi��o 0)
void exclui_nodo ( NODO *lista ); // exclui um registro por c�digo
void altera_nodo ( NODO *lista ); // altera um registro a partir de um c�digo de refer�ncia
void ordena_lista ( NODO *lista ); // ordena registros por c�digo - ordem crescente
void consulta_nome ( NODO lista ); // consulta por nome de refer�ncia

int main()
{
	
	return 0;
}

void consulta_nome ( NODO lista ) // consulta por nome de refer�ncia
{
	char procuraNome[30]; // o nome nao ter� mas que 30 char de acordo com defini��o da Struct
	int index;
	
	if(lista.f == 0) //valida se a lista est� vazia
	{
		printf("N�o existem registros a serem consultados!"); //informa usuario
	}
	
	printf("informe o nome a ser consultado:"); //pega nome a ser consultado
	scanf("%c",&procuraNome);//le o nome a ser consultado
	
	for (index = 0 ;  index < lista.f ; index ++) //percorre todas as posi��es do vetor enquanto nao atingir o limite de tamanho ocupado
	{
	
		if(lista.info[index].nome == procuraNome) //verifica desde a primeira posi��o, comparando se o c�digo da pr�xima � menor que o da posi��o atual
			{
			
				printf("Nome: %c",procuraNome);	//exibe o nome consultado
			
			}
		
		if(index == lista.f) //valida se o index percorreu todas as posi��es do vetor
			{
			
				printf("O nome n�o foi encontrado");//informa ao user que nome nao encontrado
			
			}
		
	}
		
}


void ordena_lista(NODO *lista)
{
	int index = 0; //controla as posi��es do vetor de tipo lista
	int y;
	NODO swap; //variavel do tipo nodo para auxiliar na troca
	
	if(lista->f == 0) //valida se a lista est� vazia, se estiver, ordena��o n�o executa.
	{
		printf("N�o existem registros para ordena��o...");
			
	}
	else
	{    //*trocar o lista->f por Index - ok
		//*trocar a condi��o por index < LISTA_TAM - ok
		for(index = 0 ; index < lista->f ; index++) //para lista come�ando em '0' enquanto n�o for de tamanho N_MAX incrementa o lista->f
		{ //*implementar segundo for para comparar cada posi��o, com toda a Lista
			for(y = 0 ; y < lista->f ; y++)
			{
				if(lista[index].info->codigo  > lista[y+1].info->codigo ) //verifica desde a primeira posi��o, comparando se o c�digo da pr�xima � menor que o da posi��o atual
					{
						
						swap.info->codigo = lista[index].info->codigo;  // swap recebe o codigo da posi��o Lista[index] 
						lista[index].info->codigo = lista[y+1].info->codigo; // Lista[index] recebe o codigo de Lista[index+1] (pr�xima)
						lista[y+1].info->codigo = swap.info->codigo; //Lista[index+1] recebe o c�digo armazenado em Swap;
							
						//index ++; //incrementa index para dar continuidade no la�o FOR //*colocar o Index fora do IF
					}
				y ++;
			}
			index ++;	
		}
				
	}
		
}

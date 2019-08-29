#include <stdio.h>
#include <conio.h>
#define N_MAX   100 //define quantidade maxima de registros aceitos

typedef struct { // registro para uma pessoa       
   int  codigo;       
   char nome[30];
}INFORMACAO;   
    
typedef struct {       
   INFORMACAO info[N_MAX]; // dados do registro       
   int f; // nÃºmero de registro(s) ocupado(s)
}NODO; // estrutura do tipo NODO

void ordena_lista (NODO *lista); // ordena registros por cÃ³digo - ordem crescente
void inclui_inicio ( NODO *lista ); // inclui um novo registro no início da lista (posição 0)
void exclui_nodo ( NODO *lista ); // exclui um registro por código
void altera_nodo ( NODO *lista ); // altera um registro a partir de um código de referência
void ordena_lista ( NODO *lista ); // ordena registros por código - ordem crescente
void consulta_nome ( NODO lista ); // consulta por nome de referência

int main()
{
	
	return 0;
}

void consulta_nome ( NODO lista ) // consulta por nome de referência
{
	char procuraNome[30]; // o nome nao terá mas que 30 char de acordo com definição da Struct
	int index;
	
	if(lista.f == 0) //valida se a lista está vazia
	{
		printf("Não existem registros a serem consultados!"); //informa usuario
	}
	
	printf("informe o nome a ser consultado:"); //pega nome a ser consultado
	scanf("%c",&procuraNome);//le o nome a ser consultado
	
	for (index = 0 ;  index < lista.f ; index ++) //percorre todas as posições do vetor enquanto nao atingir o limite de tamanho ocupado
	{
	
		if(lista.info[index].nome == procuraNome) //verifica desde a primeira posição, comparando se o código da próxima é menor que o da posição atual
			{
			
				printf("Nome: %c",procuraNome);	//exibe o nome consultado
			
			}
		
		if(index == lista.f) //valida se o index percorreu todas as posições do vetor
			{
			
				printf("O nome não foi encontrado");//informa ao user que nome nao encontrado
			
			}
		
	}
		
}


void ordena_lista(NODO *lista)
{
	int index = 0; //controla as posições do vetor de tipo lista
	int y;
	NODO swap; //variavel do tipo nodo para auxiliar na troca
	
	if(lista->f == 0) //valida se a lista está vazia, se estiver, ordenação não executa.
	{
		printf("Não existem registros para ordenação...");
			
	}
	else
	{    //*trocar o lista->f por Index - ok
		//*trocar a condição por index < LISTA_TAM - ok
		for(index = 0 ; index < lista->f ; index++) //para lista começando em '0' enquanto não for de tamanho N_MAX incrementa o lista->f
		{ //*implementar segundo for para comparar cada posição, com toda a Lista
			for(y = 0 ; y < lista->f ; y++)
			{
				if(lista[index].info->codigo  > lista[y+1].info->codigo ) //verifica desde a primeira posição, comparando se o código da próxima é menor que o da posição atual
					{
						
						swap.info->codigo = lista[index].info->codigo;  // swap recebe o codigo da posição Lista[index] 
						lista[index].info->codigo = lista[y+1].info->codigo; // Lista[index] recebe o codigo de Lista[index+1] (próxima)
						lista[y+1].info->codigo = swap.info->codigo; //Lista[index+1] recebe o código armazenado em Swap;
							
						//index ++; //incrementa index para dar continuidade no laço FOR //*colocar o Index fora do IF
					}
				y ++;
			}
			index ++;	
		}
				
	}
		
}

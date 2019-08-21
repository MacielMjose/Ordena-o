#include <stdio.h>
#include <conio.h>
#define N_MAX   100 //define quantidade maxima de registros aceitos

typedef struct { // registro para uma pessoa       
   int  codigo;       
   char nome[30];
}INFORMACAO;   
    
typedef struct {       
   INFORMACAO info[N_MAX]; // dados do registro       
   int f; // n�mero de registro(s) ocupado(s)
}NODO; // estrutura do tipo NODO

void ordena_lista ( NODO *lista ); // ordena registros por c�digo - ordem crescente

void ordena_lista(NODO *lista)
{
	int index = 0; //controla as posi��es do vetor de tipo lista
	NODO swap; //variavel do tipo nodo para auxiliar na troca
	
	if(lista->f == 0) //valida se a lista est� vazia, se estiver, ordena��o n�o executa.
	{
		printf("N�o existem registros para ordena��o...");
			
	}
	else
	{    
		for(lista->f = 0 ; lista->f <= N_MAX ;lista->f ++) //para lista come�ando em '0' enquanto n�o for de tamanho N_MAX incrementa o lista->f
		{
			if(lista[index].info->codigo  > lista[index].info->codigo ) //verifica desde a primeira posi��o, comparando se o c�digo da pr�xima � menor que o da posi��o atual
			{
				
				swap.info->codigo = lista[index].info->codigo;  // swap recebe o codigo da posi��o Lista[index] 
				lista[index].info->codigo = lista[index+1].info->codigo; // Lista[index] recebe o codigo de Lista[index+1] (pr�xima)
				lista[index+1].info->codigo = swap.info->codigo; //Lista[index+1] recebe o c�digo armazenado em Swap;
					
				index ++; //incrementa index para dar continuidade no la�o FOR
			}
			
			
		}
		
		
	}
	
	
}

int main()
{
	
	return 0;
}



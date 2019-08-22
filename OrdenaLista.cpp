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
				if(lista->info[index].codigo  > lista->info[y+1].codigo ) //verifica desde a primeira posição, comparando se o código da próxima é menor que o da posição atual
					{
						
						swap.info->codigo = lista->info[index].codigo;  // swap recebe o codigo da posição Lista[index] 
						lista->info[index].codigo = lista->info[y+1].codigo; // Lista[index] recebe o codigo de Lista[index+1] (próxima)
						lista->info[y+1].codigo = swap.info->codigo; //Lista[index+1] recebe o código armazenado em Swap;
							
						//index ++; //incrementa index para dar continuidade no laço FOR //*colocar o Index fora do IF
					}
				y ++;
			}
			index ++;	
		}
				
	}
	
	
}



int main()
{
	
	
	
	return 0;
}


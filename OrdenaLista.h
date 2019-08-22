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




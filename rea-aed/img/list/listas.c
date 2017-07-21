




		struct No{
			int num;
			struct No *prox;
		};
		
		
		/*para toda hora não precisar escrever "struct No" vamos definir 
		   o tipo No através de typedef para simplificar*/
		typedef struct No No;
		/*toda lista tem um inicio e fim, para isso declaramos dois ponteiros do tipo No para apontar para os
		   os nós que estrão no iniício e fim da lista respectivamente. 
		   Como a lista está inicialmente vazia, inicio e fim apontam para NULL */
		No *inicio = NULL;
		No *fim = NULL;
		/*necessitaremos também de dois ponteiros auxilares *aux e *ant */
		No *aux;
		No *anterior;
		
		
		
		void insere_inicio_lista(){
			/*a cada inserção alocamos dinamicamente um espaço para um novo nó*/
			No *novo =(No*) malloc(sizeof(No));
			/*o número a ser inserido será armazenado em novo->num*/
			printf("Digite o numero a ser inserido no inicio da lista: ");
			scanf("%d",&novo->num);
			/*caso a lista estiver vazia o primeiro elemento a ser inserido será o primeiro e último*/
			if(inicio == NULL){
				/*aqui fazemos com que inicio aponte para o mesmo endereço que novo aponta*/
				inicio = novo;
				/*aqui fazemos com que fim aponte para o mesmo endereço que novo aponta*/
				fim = novo;
				/*aqui fazemos com que o endereço para o qual fim aponta, no atributo prox receba NULL*/
				fim->prox = NULL;
			/*caso a lista não esteja vazia*/
			}else{
				/*como a inserção é no inicio, o novo nó inserido receberá no atributo prox o endereço que inicio aponta, ou seja,
				    o inicio anterior será agora o segundo elemento, portante o primeiro elemento da lista terá que apontar para ele*/
				novo->prox = inicio;
				/*aqui fazemos com que inicio aponte para o mesmo endereço do novo nó inserido*/
				inicio = novo;
			}
			printf("\nNumero inserido no inicio da lista!");
		}
		
		
		void insere_fim_lista(){
			/*a cada inserção alocamos dinamicamente um espaço para um novo nó*/
			No *novo =(No*) malloc(sizeof(No));
			/*o número a ser inserido será armazenado em novo->num*/
			printf("Digite o numero a ser inserido no fim da lista: ");
			scanf("%d",&novo->num);
			/*caso a lista estiver vazia o primeiro elemento a ser inserido será o primeiro e último*/
			if(inicio == NULL){
				/*aqui fazemos com que inicio aponte para o mesmo endereço que novo aponta*/
				inicio = novo;
				/*aqui fazemos com que fim aponte para o mesmo endereço que novo aponta*/
				fim = novo;
				/*aqui fazemos com que o endereço para o qual fim aponta, no atributo prox receba NULL*/
				fim->prox = NULL;
			/*caso a lista não esteja vazia*/
			}else{
				/*como a inserção é no fim, o nó para o qual fim aponta, no atributo prox, receberá o endereço de novo, ou seja,
					o último elemento será agora o penúltimo, e portanto deverá apontar para o último elemento inseirido*/
				fim->prox = novo;
				/*aqui fazemos com que fim aponte para o mesmo do novo nó inserido*/
				fim = novo;
				/*aqui fazemos com que o endereço para o qual fim aponta, no atributo prox receba NULL*/
				fim->prox = NULL;
			}
			printf("\nNumero inserido no fim da lista!");
		}
		
		
		void imprime_lista(){
			/*caso a lista esteja vazia*/
			if(inicio == NULL){
				printf("\nLista Vazia!!");
			/*caso a lista não esteja vazia*/
			}else{
				/*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endereço que inicio aponta*/
				aux = inicio;
				do{
					/*impressão do elemento que aux aponta*/
					printf(" %d ", aux->num);
					/*aux aponta para o próximo elemento da lista, que será o endereço contido no ponteiro prox.*/
					aux = aux->prox;
				/*essa operação será feita até aux ser diferente de NULL, ou seja, não houverem mais elementos a serem impressos*/
				}while(aux != NULL);
			}
		}
		
		
		void remover_elemento(){
			int numero, achou;/*a variável achou será utilizada como um contador de números removidos*/
			if(inicio == NULL){  /*caso a lista esteja vazia*/
				printf("\nLista Vazia!!");
			}else{  /*caso a lista não esteja vazia*/
				printf("Digite o elemento a ser removido: "); scanf("%d", &numero);
				aux = inicio;  /*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endereço que inicio aponta*/
				anterior = NULL; achou = 0;
			  do{
				  if(aux->num == numero){  /*caso aux-> num seja igual ao número a ser removido*/
					  achou = achou + 1;  /*incrementamos achou*/
					  if(aux == inicio){	  /*se o elemento a ser removido for o primeiro da lista*/
						  inicio = aux ->prox;  /*inicio apontará para o segundo elemento da lista ou para NULL caso o elemento 
															removido seja o único elemento da lista*/
						  free(aux);  /*desalocamos o espaço para onde aux apontava*/
						  aux = inicio; /*aux aponta para o inicio da lista*/
					  }else if (aux == fim){  /*se o elemento a ser removido for o último da lista*/
						  anterior->prox = NULL; /*o elemento anterior a fim, no atributo prox apontará para NULL*/
						  fim = anterior; /*fim aponta para o elemento apontado por anterior*/
						  free(aux); /*desalocamos o espaço para onde aux apontava*/
						  aux = NULL; /*como era o últmo elemento da lista, aux recebe NULL*/
					  }else{   /*se o elemento a ser removido não for nem o primeiro nem o último da lista */
						  anterior->prox = aux->prox; /*o elemento anterior ao elemento a ser removido, no atributo prox apontará 
						                                                  para o elemento para qual aux->prox apontava*/
						  free(aux); /*desalocamos o espaço para onde aux apontava*/
						  aux = anterior -> prox; /*aux aponta para o próximo elemento da lista, aquele que era 
																o seguinte ao número removido*/
					  }
				 }else{   /*caso aux-> num não seja igual ao número a ser removido*/
					 anterior = aux; /*anterior aponta para o endereço de aux*/
					 aux = aux -> prox;/*aux recebe o endereço do próximo nó da lista*/
				 }
			 /*essa operação será feita até aux ser diferente de NULL (até não houverem mais elementos a serem pesquisados)*/
			}while(aux != NULL);
			
			
			/*impressão do resultado*/
			if(achou == 0){
					printf("Numero nao encontrado!");
					}else{
						printf("Numero removido %d vez(es)",achou);
					}
			}
		}
		
		
		
		void esvaziar_lista(){
			/*caso a lista esteja vazia*/
			if(inicio == NULL){
				printf("\nLista Vazia!!");
			/*caso a lista não esteja vazia*/
			}else{
				/*utilizando o ponteiro aux,  fazemos com ele aponte para o mesmo endereço de inicio  aponta*/
				aux = inicio;
				do{
					/*inicio apontará para o próximo elemento da lista*/
					inicio = inicio->prox;
					 /*desalocamos o espaço para onde aux apontava*/
					free(aux);
					/*aux apontará para o mesmo endereço que inicio aponta*/
					aux = inicio;
				/*essa operação será feita até aux ser diferente de NULL, ou seja, não houverem mais elementos a serem removidos*/
				}while(aux != NULL);
				printf("\nLista Esvaziada!!");
			}
			getch();
		}
		
		
		
		void insere_lista(){
			/*a cada inserção alocamos dinamicamente um espaço para um novo nó*/
			No *novo =(No*) malloc(sizeof(No));
			/*o número a ser inserido será armazenado em novo->num*/
			printf("\nDigite o no a ser inserido na lista: "); scanf("%d",&novo->num);
			/*caso a lista estiver vazia o primeiro elemento a ser inserido será o primeiro e último*/
			if(inicio == NULL){
				inicio = novo;/*aqui fazemos com que inicio aponte para o mesmo endereço que novo aponta*/
				fim = novo;/*aqui fazemos com que fim aponte para o mesmo endereço que novo aponta*/
				fim->prox = NULL;/*aqui fazemos com que o endereço para o qual fim aponta, no atributo prox receba NULL*/
			}else{  /*caso a lista não esteja vazia*/
				anterior = NULL; /*inicialmente anterior apontará para NULL*/
				aux = inicio; /*aux aponta para o primeiro elemento da lista*/
				/*enquanto aux apontar para um nó existente  e o número inserido for maior que o número apontado por aux, a variação 
				 do valor de aux fará com que a lista seja percorrida e  o novo número possa ser inserido no local adequado*/
				while(aux != NULL && novo->num > aux->num){
					anterior = aux;/*anterior aponta para o endereço que aux aponta*/
					aux = aux->prox; /*aux aponta para o próximo nó da lista*/
				}
				/*caso não exista nenhum número menor que o novo número*/
				if(anterior == NULL){
					novo->prox = inicio;/*o novo elemento no atributo prox, apontará para o elemento que até então 
													  era o primeiro elemento da lista*/
					inicio = novo;/*novo será o primeiro elemento da lista, inicio apontará para o endereço de novo*/
				/*caso não exista nenhum número maior que o novo número*/	
				}else if(aux == NULL){
					fim->prox = novo;/* o até então ultimo elemento da lista no atributo prox apontará para novo*/
					fim = novo;/*novo será o ultimo elemento da lista, fim apontará para o endereço de novo*/
					fim->prox = NULL;/*aqui fazemos com que o endereço para o qual fim aponta, no atributo prox receba NULL*/
				/*caso número precise ser inseirido no meio da lista*/
				}else{
					anterior->prox = novo;/*o primeiro número menor que o novo inseirido no atributo prox recebe o endereço de novo*/
					novo->prox = aux;/*novo no atibuto prox, recebe o endereço do primeiro número maior que ele*/
				}
			}
			printf("\nNumero inserido na lista!");
		}

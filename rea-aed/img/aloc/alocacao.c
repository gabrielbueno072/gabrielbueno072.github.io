


		*malloc(numero_de_bytes);
		
		
		(tipo_predefinido *) malloc(numero_de_bytes);
		
		
		#include <stdio.h>
		#include <stdlib.h>
		int main(){
			/*declaração de um ponteiro do tipo char*/
			char *ptr_nome;
			/* malloc reserva 30 bytes
			  (char *) faz o cast convertendo os 30 bytes de maneira que a memória seja organizada
			   para amazenar conteúdo do tipo char
			   ptr_nome recebe o endereço de memória do primeiro byte alocado
			*/
			ptr_nome = (char *) malloc(30);
			/*Entrada de dados, o nome digitado será armazenado no espaço reservado por malloc,
			  onde ptr_ nome está apontado
			 */
			printf("Digite seu nome: ");
			gets(ptr_nome);
			/*Impressão do nome*/
			printf("%s", ptr_nome);
			return 0;
		}
		
		
		sizeof nome_da_variável;
					/*ou*/
		sizeof (tipo_predefinido);
		
		

		(tipo_predefinido *) malloc(sizeof (tipo_predefinido));
		
		
		(tipo_predefinido *) malloc( n * sizeof (tipo_predefinido));
		
		
		
		#include <stdio.h>
		#include <stdlib.h>
		int main(){
			/*declaração de um ponteiro do tipo char*/
			char *ptr_nome;
			/* malloc reserva espaço equivalente a 30 caracteres com a ajuda de sizeof
			  (char *) faz o cast convertendo o espaço reservado de maneira que a memória seja organizada
			   para amazenar conteúdo do tipo char
			   ptr_nome recebe o endereço de memória do primeiro byte alocado
			*/
			ptr_nome = (char *) malloc(30 * sizeof(char));
			/*Entrada de dados, o nome digitado será armazenado no espaço reservado por malloc*/
			printf("Digite seu nome: ");
			gets(ptr_nome);
			/*Impressão do nome*/
			printf("%s", ptr_nome);
			return 0;
		}
		
		
		(tipo_predefinido *) *calloc(numero_elementos, numero_de_bytes);
		
		
		
		(tipo_predefinido *) *calloc(numero_de_elementos, sizeof(tipo_predefinido));
		
		
		
		#include <stdio.h>
		#include <stdlib.h>
		#include <math.h>
		int main (){
			/*declaração das variaveis*/
			int *ptr;
			int n;
			int i;
			/*definição de quantos elementos serão elevados ao quadrado*/
			printf("Entre com o numero de elementos: ");
			scanf("%d",&n);
			 /* calloc aloca n números inteiros
				p pode agora ser tratado como um vetor com n posicoes */
			ptr = calloc(n, sizeof(int));
			/*ptr = malloc(n*sizeof(int));  Maneira equivalente usando malloc. */
			for (i=1; i <= n; i++)
				 /*calculo do quadrado de i*/
				 ptr[i] = pow(i,2);
			for (i=1; i <= n; i++)
				/*saida de dados*/
				 printf("%d\n", ptr[i]);
			return 0;
		 }
		 
		 
		 
		 free(ponteiro_de_alocacao);
		 
		 
		#include <stdio.h>
		#include <stdlib.h>
		/*função que faz com que o espaço alocado por ptr seja liberado utilizando free*/
		void libera(int *ptr){
			free(ptr);
		}
		/*função que faz a alocação de 100 bytes e tranforma em espaço para armazenar inteiros*/
		void aloca(){
			int *ptr;
			ptr = (int *) malloc(1000);
			/*chamada da função libera*/
			libera(ptr);
		}
		int main(){
			int n, i;
			/*Entrada no número de iterações*/
			scanf("%d",&n);
			/*execução das iterações*/
			for (i = 0; i < n; i++)
				aloca();
			return 0;
		}
		
		(tipo_predefinido *) realloc(ptr, numero_bytes);
										/*ou*/
		(tipo_predefinido *) realloc( ptr, n*sizeof(tipo_predefinido) );
		
		
		
		ptr = ( tipo_predefinido *) realloc( ptr, n*sizeof(tipo_predefinido) );
		
		
		#include <stdio.h>
		#include <stdlib.h>
		#include <string.h>
		int main(){
		   char *ptr;
		   /* Alocação de memória - 14 bytes alocados*/
		   ptr = (char *) malloc(14);
		   /*Armazenamos LinguagemC no espaço alocado*/
		   strcpy(ptr, "LinguagemC");
		   /*Impressão da String e seu endereço de memória*/
		   printf("String = %s,  Endereco = %u\n", ptr, ptr);
		   /* Realocação de memória, desejamos adicionar a String Brasil ao espaço alocado
			  porém 14 bytes não será o suficiente, então alocamos mais 8 bytes, resultando
			  num total de 22 bytes alocados */
		   ptr = (char *) realloc(ptr, 22);
		   /*Cancatenamos a String Brasil para o espaço alocado*/
		   strcat(ptr, "Brasil");
		   /*Impressao da String e seus de memória*/
		   printf("String = %s,  Address = %u\n", ptr, ptr);
		   /*Liberação do espaço alocado*/
		   free(ptr);
		   return(0);
		}


		
		
		
		
		
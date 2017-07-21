			
			#include <stdio.h>
			#include <stdlib.h>
			#include <math.h>
			int main (){
				/*declaração das variaveis*/
				int *ptr;
				int n, i;
				/*definição de quantos elementos serão elevados ao quadrado*/
				printf("Entre com o numero de elementos: ");
				scanf("%d",&n);
				 /* calloc aloca n números inteiros
					p pode agora ser tratado como um vetor com n posicoes */
				ptr = calloc(n, sizeof(int));
				/*ptr = malloc(n*sizeof(int));  Maneira equivalente usando malloc. */
				for (i=0; i < n; i++)
					 /*calculo do quadrado de i*/
					 ptr[i] = pow(i+1,2);
				for (i=0; i < n; i++)
					/*saida de dados*/
					 printf("%d\n", ptr[i]);
				return 0;
			}
			
			
			
			


				
				
				
				#include <stdio.h>
				#include <stdlib.h>
				/*fun��o que faz com que o espa�o alocado por ptr seja liberado utilizando free*/
				void libera(int *ptr){
					free(ptr);
				}
				/*fun��o que faz a aloca��o de 1000 bytes e tranforma em espa�o para armazenar inteiros*/
				void aloca(){
					int *ptr;
					ptr = (int *) malloc(1000);
					/*chamada da fun��o libera*/
					libera(ptr);
				}
				int main(){
					int n, i;
					/*Entrada no n�mero de itera��es*/
					scanf("%d",&n);
					/*execu��o das itera��es*/
					for (i = 0; i < n; i++)
						aloca();
					return 0;
				}

				
				
				
				
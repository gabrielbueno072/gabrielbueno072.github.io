				
				
				
				#include <stdio.h>
				#include <stdlib.h>
				/*função que faz com que o espaço alocado por ptr seja liberado utilizando free*/
				void libera(int *ptr){
					free(ptr);
				}
				/*função que faz a alocação de 1000 bytes e tranforma em espaço para armazenar inteiros*/
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

				
				
				
				
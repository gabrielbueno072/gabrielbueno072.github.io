

tipo nome[dimensao1][dimensao2][dimensao3]...[dimensao n];

#include <stdio.h>
int main(){
	/*declaração da matriz tridimensional*/
	int matriz[3][2][2];
	int indice1, indice2,indice3;

	printf("Preencha a matriz tridimensional com valores inteiros: \n");
	/*utilização de 3 for para percorrer as três dimensões da matriz para fazer seu carregamento*/
	for (indice1 = 0; indice1 < 3; indice1++){
			for (indice2 = 0; indice2 < 2; indice2++){
					for (indice3 = 0; indice3 < 2; indice3++){
						printf("Entre com matriz[%d][%d][%d]: ", indice1, indice2, indice3);
						scanf(" %d", &matriz[indice1][indice2][indice3] );
					}
			}
	}
	printf("Matriz:\n");
	/*utilização de 3 for para percorrer as três dimensões da matriz para imprimir seus valores*/
	for (indice1 = 0; indice1 < 3; indice1++){
			for (indice2 = 0; indice2 < 2; indice2++){
					for (indice3 = 0; indice3 < 2; indice3++)
						printf(" %d ", matriz[indice1][indice2][indice3]);
			}
	}
	return 0;
}

	int G[2][2];
	float num[3][4];
	char nome[20][10];
	
	
	for(i = 0; i < 2; i++){
			for(j = 0; i < 5; j++)
				scanf("%d", &num[i][j]);
	}
	
	for(i = 0; i < 2; i++){
			for(j = 0; i < 5; j++)
				printf("%d ", num[i][j]);
	}
	
	
	
	
	
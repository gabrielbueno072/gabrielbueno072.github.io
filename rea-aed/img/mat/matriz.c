#include <stdio.h>
int main(){
    /*declara��o das vari�veis*/
    int matriz[3][2];
    int indice1, indice2, maior;
    printf("Escreva 6 numeros inteiros: \n");
    /*utiliza��o do for para percorrer as linhas da matriz do �ndice 0 at� 2 */
    for (indice1 = 0; indice1 < 3; indice1++){
            /*utiliza��o do for para percorrer as colunas da matriz do �ndice 0 at� 1 */
            for (indice2 = 0; indice2 < 2; indice2++)
            /*a posi��o correspondente do vetor recebe o valor digitado*/
            scanf("%d", &matriz[indice1][indice2] );
    }
    maior = 0;
	/*busca pela matriz pelo maior n�mero, a v�riavel maior armazenar� o maior elemento*/
    for (indice1 = 0; indice1 < 3; indice1++){
            for (indice2 = 0; indice2 < 2; indice2++){
                if(maior < matriz[indice1][indice2])
                    maior = matriz[indice1][indice2];
            }
    }
   printf("Minha matriz:\n");
   /*impress�o da matriz*/
   for (indice1 = 0; indice1 < 3; indice1++){
         printf("\n");
            for (indice2 = 0; indice2 < 2; indice2++){
                printf("\t %d ", matriz[indice1][indice2]);
            }

    }
	/*impress�o do maior n�mero*/
    printf("\nMaior numero: %d ", maior);
    return 0;
}



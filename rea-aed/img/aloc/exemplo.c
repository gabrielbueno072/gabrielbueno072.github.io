#include <stdio.h>
#include <stdlib.h>
int main(){
    /*declara��o de um ponteiro do tipo int*/
    int *ptr;
    int i;
    /* malloc reserva espa�o equivalente a 5 inteiros com a ajuda de sizeof
      (int *) faz o cast convertendo o espa�o reservado de maneira que a mem�ria seja organizada
       para amazenar conte�do do tipo int
       ptr recebe o endere�o de mem�ria do primeiro byte alocado
    */
    ptr = (int *) malloc(5 * sizeof(int));
    /*Entrada de dados, 5 n�meros inteiros ser�o digitados e armazenados no espa�o alocado anteriormente*/
    for(i = 0; i< 5; i++){
        printf("Digite n[%d]: ", i+1);
        /*5 posi��es foram alocadas, o uso do �ndice para armazenar � semelhante a vetores*/
        scanf("%d",&ptr[i]);
    }
    /*Impress�o do 5 n�meros digitados pelo usu�rio*/
    for(i = 0; i < 5; i++){
        printf("\n");
        printf("n[%d]: %d \n", i+1, ptr[i]);
    }
    /*Desalocamento do espa�o reservado*/
    free(ptr);
    return 0;
}

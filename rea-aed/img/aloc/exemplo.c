#include <stdio.h>
#include <stdlib.h>
int main(){
    /*declaração de um ponteiro do tipo int*/
    int *ptr;
    int i;
    /* malloc reserva espaço equivalente a 5 inteiros com a ajuda de sizeof
      (int *) faz o cast convertendo o espaço reservado de maneira que a memória seja organizada
       para amazenar conteúdo do tipo int
       ptr recebe o endereço de memória do primeiro byte alocado
    */
    ptr = (int *) malloc(5 * sizeof(int));
    /*Entrada de dados, 5 números inteiros serão digitados e armazenados no espaço alocado anteriormente*/
    for(i = 0; i< 5; i++){
        printf("Digite n[%d]: ", i+1);
        /*5 posições foram alocadas, o uso do índice para armazenar é semelhante a vetores*/
        scanf("%d",&ptr[i]);
    }
    /*Impressão do 5 números digitados pelo usuário*/
    for(i = 0; i < 5; i++){
        printf("\n");
        printf("n[%d]: %d \n", i+1, ptr[i]);
    }
    /*Desalocamento do espaço reservado*/
    free(ptr);
    return 0;
}

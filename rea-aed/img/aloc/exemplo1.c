#include <stdio.h>
#include <stdlib.h>
int main(){
    /*declara��o de um ponteiro do tipo char*/
    char *ptr_nome;
    /* malloc reserva 30 bytes
      (char *) faz o cast convertendo os 30 bytes de maneira que a mem�ria seja organizada
       para amazenar conte�do do tipo char
       ptr_nome recebe o endere�o de mem�ria do primeiro byte alocado
    */
    ptr_nome = (char *) malloc(30);
    /*Entrada de dados, o nome digitado ser� armazenado no espa�o reservado por malloc,
      onde ptr_ nome est� apontado
     */
    printf("Digite seu nome: ");
    gets(ptr_nome);
    /*Impress�o do nome*/
    printf("%s", ptr_nome);
    return 0;
}

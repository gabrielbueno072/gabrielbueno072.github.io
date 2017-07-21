#include <stdio.h>
#include <stdlib.h>
int main(){
    /*declara��o de um ponteiro do tipo char*/
    char *ptr_nome;
    /* malloc reserva espa�o equivalente a 30 caracteres com a ajuda de sizeof
      (char *) faz o cast convertendo o espa�o reservado de maneira que a mem�ria seja organizada
       para amazenar conte�do do tipo char
       ptr_nome recebe o endere�o de mem�ria do primeiro byte alocado
    */
    ptr_nome = (char *) malloc(30 * sizeof(char));
    /*Entrada de dados, o nome digitado ser� armazenado no espa�o reservado por malloc*/
    printf("Digite seu nome: ");
    gets(ptr_nome);
    /*Impress�o do nome*/
    printf("%s", ptr_nome);
    return 0;
}


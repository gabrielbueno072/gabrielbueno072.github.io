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


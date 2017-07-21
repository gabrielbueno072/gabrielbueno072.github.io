#include <stdio.h>
#include <stdlib.h>
int main(){
    /*declaração de um ponteiro do tipo char*/
    char *ptr_nome;
    /* malloc reserva 30 bytes
      (char *) faz o cast convertendo os 30 bytes de maneira que a memória seja organizada
       para amazenar conteúdo do tipo char
       ptr_nome recebe o endereço de memória do primeiro byte alocado
    */
    ptr_nome = (char *) malloc(30);
    /*Entrada de dados, o nome digitado será armazenado no espaço reservado por malloc,
      onde ptr_ nome está apontado
     */
    printf("Digite seu nome: ");
    gets(ptr_nome);
    /*Impressão do nome*/
    printf("%s", ptr_nome);
    return 0;
}

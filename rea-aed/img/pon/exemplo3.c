#include <stdio.h>

struct telefone{
    char nome[15];
    char ddd[2];
    char num[10];
};
struct telefone *ptr; /* declaração de ponteiro para a estrutura*/

int main(){
    struct telefone pedro = {"Pedro da Silva", "99", "123-456"};/*inicialização da estrutura declarada*/
    ptr = &pedro; /*inicialização do ponteiro ptr  */
    printf( "%s", ptr->nome ); /*impressão do primeiro atributo da estrutura pedro através do ponteiro*/
    return 0;
}

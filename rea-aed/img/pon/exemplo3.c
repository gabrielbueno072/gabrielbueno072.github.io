#include <stdio.h>

struct telefone{
    char nome[15];
    char ddd[2];
    char num[10];
};
struct telefone *ptr; /* declara��o de ponteiro para a estrutura*/

int main(){
    struct telefone pedro = {"Pedro da Silva", "99", "123-456"};/*inicializa��o da estrutura declarada*/
    ptr = &pedro; /*inicializa��o do ponteiro ptr  */
    printf( "%s", ptr->nome ); /*impress�o do primeiro atributo da estrutura pedro atrav�s do ponteiro*/
    return 0;
}

#include <stdio.h>
#include <string.h>
struct Aluno{
    char nome [80] ;
    float nota ;
};
int main(){
    struct Aluno a, b ;
    printf ("Digite o nome: " );
    gets (a.nome);
    printf("Digite a nota: ");
    scanf("%f", &a.nota) ;
    b = a ;
    printf("b.nome = %s , b.nota = %.2 f \n" , b.nome, b.nota );
    return 0;
}


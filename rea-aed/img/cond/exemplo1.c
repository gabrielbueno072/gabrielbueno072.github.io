#include <stdio.h>

int main(){

    int idade;

    printf("Entre com sua idade: ");
    scanf("%d",&idade);

    /*estrutura condicional simples verifica se idade a idade é >= a 18 */
    if(idade >= 18)
        /*caso idade seja > ou = a 18*/
        printf("Voce eh maior de idade!");

    printf("\nObrigado pela cooperacao\n");

    return 0;
}

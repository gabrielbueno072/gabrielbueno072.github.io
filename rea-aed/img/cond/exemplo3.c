#include <stdio.h>

int main(){

    char sexo;

    scanf("%c",&sexo);
    /*switch analisara a variável sexo*/
    switch(sexo){
        /*caso sexo contenha 'm'*/
        case 'm':
            printf("Sexo masculino");
            break;
        case'f':
        /*caso sexo contenha 'f'*/
            printf("Sexo feminino");
            break;
        default:
        /*caso sexo contenha qualquer outra coisa*/
            printf("Resposta desconhecida");

    }
    return 0;
}

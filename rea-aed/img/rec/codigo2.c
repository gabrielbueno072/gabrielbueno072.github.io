/*C�lculo de fatorial com fun��o recursiva*/
#include <stdio.h>

/*Fun��o recursiva que calcula o fatorial de um numero inteiro n*/
int fatorial(int n){
    int vfat;
    /*Caso base: fatorial de n == 0 retorna 1*/
    if (n == 0){
        return 1;
    }
    else{
        /*Chamada recursiva*/
        vfat = n * fatorial(n - 1);
        return vfat;
    }
}
int main(){
    int numero, fat;
    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d",&numero);
    /*chamada da fun��o fatorial*/
    if(numero < 0){
     printf("Erro: Numero negativo!");
    }else{
        fat = fatorial(numero);
        printf("Fatorial de %d = %d",numero,fat);
    }
    return 0;
}


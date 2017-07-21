#include <stdio.h>
int verifPar(int k){
    if (k%2 == 0)
        return 1;
    else
        return 0;
	}
int main(){
    int num, resultado;
    printf("Digite um numero ");
    scanf("%d",&num);
    resultado = verifPar(num);
    if(resultado == 1)
        printf("\nO numero que voce digitou eh par\n");
    else
        printf("\nO numero que voce digitou nao eh par\n");
    return 0;
}

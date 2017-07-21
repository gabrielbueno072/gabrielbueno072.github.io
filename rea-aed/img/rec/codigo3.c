/*Cálculo da potência de um número com função recursiva*/
#include <stdio.h>

int pot(int base, int expoente){
	/*caso base*/
	if(expoente == 0)
		return 1;
	/*chamada recursiva*/
	return base * pot(base,expoente-1);
}

int main(){
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
	/*não faz a chamada da função caso a base seja < 1 ou expoente for < 0*/
    if(base < 0 || expoente < 0){
        printf("Erro!");
    }else{
        printf("\nResultado: %d", pot(base, expoente));
    }
    return 0;
}



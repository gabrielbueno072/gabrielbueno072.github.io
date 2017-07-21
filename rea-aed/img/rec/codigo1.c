#include <stdio.h>

int fatorial(int num){
	int i, resultado = 1;
	for(i = 1; i <= num; i++){
		resultado = resultado * i;
	}
	return resultado;
}

int main(){
	int num, resultado;
	scanf("%d", &num);
	if(num < 0){
        printf("Erro: Numero negativo!");
    }else{
        resultado = fatorial(num);
        printf("Fatorial de %d: %d",num, resultado);
    }
	return 0;
}

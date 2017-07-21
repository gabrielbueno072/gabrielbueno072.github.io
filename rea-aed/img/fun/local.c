
#include <stdio.h>
	/*Função mudaA*/
	void mudaA(){
		int a;
		a = 4;
		printf("MudaA, a = %d \n",a);
	}
	/*Função Principal*/
	int main(){
		int a;
		a = 2;
		printf("main, a = %d \n",a);
		mudaA();
		printf("main, a = %d \n",a);
		return 0;
	}


#include <stdio.h>
	/*Fun��o mudaA*/
	void mudaA(){
		int a;
		a = 4;
		printf("MudaA, a = %d \n",a);
	}
	/*Fun��o Principal*/
	int main(){
		int a;
		a = 2;
		printf("main, a = %d \n",a);
		mudaA();
		printf("main, a = %d \n",a);
		return 0;
	}

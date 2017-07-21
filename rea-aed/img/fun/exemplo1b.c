#include <stdio.h>
	void imprimeLinha_3 (){
		int i;
		for(i=0;i < 3; i++)
			printf("+");
		printf ("\n");
	}
	void imprimeLinha_5(){
		int i;
		for(i=0; i < 5; i++)
			printf("+");
		printf ("\n");
	}
	void imprimeLinha_7(){
		int i;
		for(i=0; i < 7; i++)
			printf("=");
		printf ("\n");
	}
	int main(){
		imprimeLinha_3();
		imprimeLinha_5();
		imprimeLinha_7();
		imprimeLinha_5();
		imprimeLinha_3();
		return 0;
	}

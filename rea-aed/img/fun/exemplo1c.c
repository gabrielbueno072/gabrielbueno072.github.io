#include <stdio.h>
	void imprimeCh(char ch, int n);

	int main(){
		imprimeCh('+',3);
		imprimeCh('+',5);
		imprimeCh('=',7);
		imprimeCh('+',5);
		imprimeCh('+',3);
		return 0;
	}
	void imprimeCh(char ch, int n){
		int i;
		for(i=0;i < n; i++)
			printf("%c",ch);
		printf("\n");
	}

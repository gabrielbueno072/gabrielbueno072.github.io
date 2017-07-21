

	char nome_da_string[tamanho];
	
	
	char linguagem[12];
	
	
	
	char linguagem[] = "Linguagem C";
	
	
	char linguagem[200] = "Linguagem C";
	
	
	scanf("%s", nome_da_string);
	
	
	
	char nome[20];
	printf("Entre com o seu nome: ");
	scanf("%s", nome); //Digitado: Joao da Silva
	//nome recebe apenas Joao
	
	
	scanf("%[^\n]", nome_da_string);
	
	
	
	char nome[20];
	printf("Entre com o seu nome: ");
	scanf("%[^\n]", nome); //Digitado: Joao da Silva
	//nome recebe Joao da Silva
	
	
	scanf("%256[^\n]", nome_da_string);
	
	
	
	gets(nome_da_string);
	
	
	char nome[20];
	printf("Entre com o seu nome: ");
	gets(nome); //Digitado: Joao da Silva
	//nome recebe Joao da Silva
	
	
	printf("Minha string: %s", nome_da_string);
	
	
	puts(nome_da_string);
	
	
	
	char nome[20] = "Maria da Silva";
	int s  = strlen(nome);
	//s receberá o valor 14
	
	
	
	char nome1[] = "Clarice Lispector";
	char nome2[] = "Oswald de Andrade";
	strcpy(nome1, nome2);
	//nome1 conterá "Oswald de Andrade"
	
	
	char msg[] = "Bom dia!";
	char nome[] = "Maria da Silva";
	strncpy(msg, nome, strlen(msg));	
	//Agora msg conterá "Maria da"
	
	
	char nome[50] = "Maria";
	char sobrenome[] = " da Silva";
	strcat(nome, sobrenome);
	//Agora nome contem "Maria da Silva"
	
	
	strcmp(string1, string2);
	
	
	
	
	
	#include <stdio.h>
	#include <string.h>
	int main(){
		char str1[12] = "Ola";
		char str2[12] = "Mundo";
		char str3[12];
		char str4[12] = "Mundo";
		int tam, x;

		/*copia str1 para str3*/
		strcpy(str3,str1);
		printf("strcpy(str3, str1): %s\n", str3);

		/*concatena  str2 para str1*/
		strcat(str1, str2);
		printf("strcat(str1, str2): %s\n", str1);

		/*comprimento total de str1 após a concatenação*/
		tam = strlen(str1);
		printf("strlen(str1): %d\n", tam);

		/*compara o conteúdo de str2 e str4*/
		x = strcmp(str2, str4);
		printf("strcmp(str2, str4): %d\n", x);
		return 0;
	}
	
	strcpy(str3, str1): Ola
	strcat(str1, str2): OlaMundo
	strlen(str1): 8
	strcmp(str2, str4): 0 (São iguais)
	
	
	char string1[] = "abcg";
    char string2[] = "abcg";
    char string3[] = "abcd";
    char string4[] = "abcx";
    int x;

    x = strcmp(string1, string2); // x recebe 0, string1 == string2
   
    x = strcmp(string1, string3); // x recebe 1, string1 > string3 
    
    x = strcmp(string1, string4); // x recebe -1, string1 < string4 
	

	
	
	
	
	
	
	
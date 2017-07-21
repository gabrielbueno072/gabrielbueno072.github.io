            
			
char
	
	 FILE *nome_do_ponteiro;
     FILE *pont_arq;
	 
	 /*caso o endereço para onde pont_arq aponta seja NULL imprime
	 uma mensagem de erro, do contrário mostra a confirmação de abertura*/
	 if (pont_arq == NULL){
		printf("ERRO! O arquivo não foi aberto!\n");
	 }else{
		printf("Arquivo aberto com sucesso!\n");
     }
	 
	 
	 
	 /*gravação de texto 
	   -> Será gravado no arquivo "texto a ser gravado no arquivo"*/
	 fprintf(nome_do_ponteiro_para_o_arquivo, "texto a ser gravado no arquivo");
	 
	 /*gravação de texto e conteúdo de variável 
	   -> Será gravado no arquivo "Um ano tem 365 dias"*/
	 int x = 365;
	 fprintf(nome_do_ponteiro_para_o_arquivo, "Um ano tem %d dias", x);
	 
	 /*gravação de texto e conteúdo de variáveis 
	   -> Será gravado no arquivo "Um ano tem 365 dias e um dia tem 24 horas"*/
	 int x = 365;
	 int y = 24;
	 fprintf(nome_do_ponteiro_para_o_arquivo, "Um ano tem %d dias e um dia tem % horas", x, y);
	 
	 /*gravação de conteúdo variável 
	   -> Será gravado no arquivo "3.14"*/
	 float pi = 3.14;
	 fprintf(nome_do_ponteiro_para_o_arquivo, "%f", pi);
	 
	 
	 fputs(variavel_string, ponteiro_para_o_arquivo);
	 
	 fputs("texto a ser gravado", ponteiro_para_o_arquivo);
	 
	 
	 
		fclose(ponteiro);
		
		
		#include <stdio.h>
		#include <stdlib.h>
		int main(){
		  /*criação de ponteiro para o arquivo*/
		  FILE *pont_arq;
		  /*abertura do arquivo*/
		  pont_arq = fopen("meu_arquivo.txt", "r");
		  /*fechamento do arquivo*/
		  fclose(pont_arq);
		 /*caso o endereço para onde pont_arq aponta seja NULL imprime
		 uma mensagem de erro, do contrário mostra a confirmação de abertura*/
		 if (pont_arq == NULL){
			printf("ERRO! O arquivo não foi aberto!\n");
		 }else{
			printf("Arquivo aberto com sucesso!\n");
		 }

		  system("PAUSE");
		  return(0);
		}
		
		
		#include <stdio.h>
		#include <conio.h>
		int main(){
			/*criação de ponteiro para o arquivo*/
			FILE *pont_arq;
			/*string para armazenamento temporário*/
			char palavra[20];
			/*abrindo o arquivo com tipo de abertura w*/
			pont_arq = fopen("arquivo_palavra.txt", "w");
			/*teste para verificar se o arquivo foi realmente criado*/
			if(pont_arq == NULL){
			 printf("Erro na abertura do arquivo!");
			 return 1;
			}
			/*Entrada de dados, aqui consideramos apenas a leitura de uma palavra
			  O %[^\n] poderia ser usado aqui no lugar de %s caso fosse necessário
			  armazenar por exemplo uma frase*/
			printf("Escreva uma palavra para testar gravacao de arquivo: ");
			scanf("%s", palavra);
			/*usando fprintf para armazenar a string no arquivo*/
			fprintf(pont_arq, "%s", palavra);
			/*usando fclose para fechar o arquivo*/
			fclose(pont_arq);
			printf("Dados gravados com sucesso!");
			getch();
		  return(0);
		}
		
		#include <stdio.h>
		#include <conio.h>
		#include <string.h>
		int main(){
			/*criação de ponteiro para o arquivo*/
			FILE *pont_arq;
			/*string para armazenamento temporário*/
			char str[30];
			/*abrindo o arquivo com tipo de abertura w*/
			pont_arq = fopen("arquivo_fPuts.txt", "w");
			/*teste para verificar se o arquivo foi realmente criado*/
			if(pont_arq == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
			}
			/*copiando a string para str*/
			strcpy(str,"Testando fPuts");
			/*gravação do conteúdo de str no arquivo*/
			fputs(str, pont_arq);
			/*fechamento do arquivo*/
			fclose(pont_arq);
			printf("Dados gravados com sucesso!");
			getch();
			return(0);
		}
		
		/*feof retorna 0 enquanto o arquivo estiver sendo lido e algo
		 diferente de 0 se o arquivo chegou ao EOF*/
		feof(ponteiro_para_o_arquivo);
		
		
		/*enquanto c != EOF (fim do arquivo) execute o bloco de comando*/	
		while((c = getc(fp) ) != EOF) {
			//bloco de  comandos;
		}
		
		
		
		/*enquanto não chegar ao fim do arquivo execute o bloco de comando*/		
		while (feof(p) == 0){
			//bloco de  comandos;
		}
		          ou
		/*enquanto não chegar ao fim do arquivo execute o bloco de comando*/		
		while (!feof(p)){
			//bloco de  comandos;
		}
		
		
		getc(ponteiro_do_arquivo);
		
		
		 /*enquanto não for fim de arquivo o looping será executado*/
		while (!feof(p)){
			//faz a leitura do caracter no arquivo apontado por pont_arq
			c = getc(pont_arq);
			//exibe o caracter lido na tela
			printf("%c" , c);  
		}
		
		
		#include <stdio.h>
		#include <conio.h>
		int main(){
		  FILE *pont_arq;
		  /*abrindo o arquivo_palavra em modo "somente leitura"*/
		  pont_arq = fopen("arquivo_palavra.txt", "r");
		  /*teste para verificar se o arquivo realmente existe*/
		  if(pont_arq == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
		  }
		  /*enquanto não for fim de arquivo o looping será executado
		  e será impresso caractere por caractere*/
		  while(!feof(pont_arq))
			printf("%c",getc(pont_arq));

		  /*fechando o arquivo*/
		  fclose(pont_arq);
		  printf("\nArquivo lido com sucesso!");
		  getch();
		  return(0);
		}

		fgets(variavel_string, numero_de_caracteres_a serem lidos, ponteiro_para_o_arquivo);
		
		
		#include <stdio.h>
		#include <conio.h>

		int main(){
		  FILE *pont_arq;
		  char str[20];
		  /*abrindo o arquivo_palavra em modo "somente leitura"*/
		  pont_arq = fopen("arquivo_palavra.txt", "r");
		  /*teste para verificar se o arquivo realmente existe*/
		  if(pont_arq == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
		  }
		  /*Enquanto não for fim de arquivo o looping será executado
			e será impresso a cada interação um string com espaço para 20 caracteres
			Caso queira imprimir os 20 primeiros caracteres eh so tirar o while*/
		  while(!feof(pont_arq)){
			printf("%s",fgets(str, 20, pont_arq));
		  }
		  /*fechando o arquivo*/
		  fclose(pont_arq);
		  printf("\nArquivo lido com sucesso!");
		  getch();
		  return(0);
		}
		
		
		
		
		
		#include <stdio.h>
		#include <conio.h>
		int main(){
		  FILE *pont_arq;
		  char str1[10], str2[10], str3[10];
		  int year;
		  /*abrindo o arquivo_palavra*/
		  pont_arq = fopen ("arquivo_palavra.txt", "w+");
		   /*teste para verificar se o arquivo realmente existe*/
		  if(pont_arq == NULL){
				printf("Erro na abertura do arquivo!");
				return 1;
		  }
		  /*escrevendo no arquivo_palavra*/
		  fputs("We are in 2017", pont_arq);
		  /*retornamos para o inicio do arquivo*/  
		  rewind(pont_arq);
		  /*fscanf
			primeiro colocamos o ponteiro apontado para o arquivo
			depois definimos o formato de leitura
			por fim se variaveis receberão conteúdo nós as colocamos na ordem de recebimento
		  */
		  fscanf(pont_arq, "%s %s %s %d", str1, str2, str3, &year);
		  printf("Read String1 |%s|\n", str1 );
		  printf("Read String2 |%s|\n", str2 );
		  printf("Read String3 |%s|\n", str3 );
		  printf("Read Integer |%d|\n", year );
		  fclose(pont_arq);
		  getch();
		  return(0);
		}

		
		
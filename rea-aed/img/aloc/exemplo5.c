#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   char *ptr;
   /* Aloca��o de mem�ria - 14 bytes alocados*/
   ptr = (char *) malloc(14);
   /*Armazenamos LinguagemC no espa�o alocado*/
   strcpy(ptr, "LinguagemC");
   /*Impress�o da String e seu endere�o de mem�ria*/
   printf("String = %s,  Endereco = %u\n", ptr, ptr);
   /* Realoca��o de mem�ria, desejamos adicionar a String Brasil ao espa�o alocado
      por�m 14 bytes n�o ser� o suficiente, ent�o alocamos mais 8 bytes, resultando
      num total de 22 bytes alocados */
   ptr = (char *) realloc(ptr, 22);
   /*Cancatenamos a String Brasil para o espa�o alocado*/
   strcat(ptr, "Brasil");
   /*Impressao da String e seus de mem�ria*/
   printf("String = %s,  Address = %u\n", ptr, ptr);
   /*Libera��o do espa�o alocado*/
   free(ptr);
   return(0);
}

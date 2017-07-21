#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   char *ptr;
   /* Alocação de memória - 14 bytes alocados*/
   ptr = (char *) malloc(14);
   /*Armazenamos LinguagemC no espaço alocado*/
   strcpy(ptr, "LinguagemC");
   /*Impressão da String e seu endereço de memória*/
   printf("String = %s,  Endereco = %u\n", ptr, ptr);
   /* Realocação de memória, desejamos adicionar a String Brasil ao espaço alocado
      porém 14 bytes não será o suficiente, então alocamos mais 8 bytes, resultando
      num total de 22 bytes alocados */
   ptr = (char *) realloc(ptr, 22);
   /*Cancatenamos a String Brasil para o espaço alocado*/
   strcat(ptr, "Brasil");
   /*Impressao da String e seus de memória*/
   printf("String = %s,  Address = %u\n", ptr, ptr);
   /*Liberação do espaço alocado*/
   free(ptr);
   return(0);
}

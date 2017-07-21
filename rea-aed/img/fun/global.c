#include <stdio.h>
int a;

/*Função mudaA*/
void mudaA();

/*Função Principal.*/
int main(){
    a = 2;
    printf("main, a = %d \n",a);
    mudaA();
    printf("main, a = %d \n",a);
    return 0;
}
/*Função mudaA*/
void mudaA(){
    a = 4;
    printf("MudaA, a = %d \n",a);
}

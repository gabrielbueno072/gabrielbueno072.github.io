#include <stdio.h>
int a;

/*Fun��o mudaA*/
void mudaA();

/*Fun��o Principal.*/
int main(){
    a = 2;
    printf("main, a = %d \n",a);
    mudaA();
    printf("main, a = %d \n",a);
    return 0;
}
/*Fun��o mudaA*/
void mudaA(){
    a = 4;
    printf("MudaA, a = %d \n",a);
}

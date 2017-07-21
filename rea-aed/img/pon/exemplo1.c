#include <stdio.h>
int main(){
    int x;
    int *ptr;
    ptr = &x;
    printf("O endereco de X eh: %p ", ptr);
    return 0;
}

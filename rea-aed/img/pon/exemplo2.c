#include <stdio.h>
int main(){
    int x;
    int *ptr;
    x = 5;
    ptr = &x;
    printf("O valor da variável X eh: %d\n", *ptr);
    *ptr = 10;
    printf("Agora, X vale: %d\n", *ptr);
    return 0;
}


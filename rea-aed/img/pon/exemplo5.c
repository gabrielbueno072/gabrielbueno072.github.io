#include <stdio.h>

void swap(int i, int j){
    int temp;
    temp = i;
    i = j;
    j = temp;
}

int main(){
    int a, b;
    a = 5;
    b = 10;
    printf ("%d %d\n", a, b);
    swap (a, b);
    printf ("%d %d\n", a, b);
    return 0;
}

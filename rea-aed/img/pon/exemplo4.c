#include <stdio.h>
int main(){
    int x = 10;
    int *p_x1 = &x;
    int **p_x2 = &p_x1;
    printf ("%d\n", x);
    printf ("%d\n", *p_x1);
    printf ("%d\n", **p_x2);
    return 0;
}

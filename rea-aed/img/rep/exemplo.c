#include <stdio.h>

int main(){
    int i, x , y;
    x = 1;
    y = 1;

    for(i = 1; i <= 10 ; i++ ){
        printf(" %d ", i);
    }
    printf("\n");

    while(x <= 10 ){
        printf(" %d ", x);
        x++;
    }
    printf("\n");
    do{
        printf(" %d ",y);
        y++;
    }while(y <= 10);

    return 0;
}

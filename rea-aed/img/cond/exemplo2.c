#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);

    media = (n1+n2+n3)/3;
    /*estrutura condicional verifica se a idade é >= a 6 */
    if(media >= 6){
        /*caso media seja > ou = a 6*/
        printf("Media = %.2f", media);
        printf("\nAPROVADO");
    }else{
     /*caso media seja < que 6*/
        printf("Media = %.2f", media);
        printf("\nREPROVADO");
    }
    return 0;
}

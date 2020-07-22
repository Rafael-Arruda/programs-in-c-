#include <stdio.h>

int main(){

    int num;
    int i,j;
    int caso = 0;
    int qtd_num;

    while(scanf("%i",&num) != EOF){
        qtd_num = 1;
        qtd_num += (num*(num+1))/2;
        caso++;
        if(qtd_num == 1){
            printf("Caso %i: %i numero\n",caso, qtd_num);
        }else{
            printf("Caso %i: %i numeros\n",caso, qtd_num);
        }
        printf("0 ");
        for(i=0;i<=num;i++){
            for(j=0;j<i;j++){
                printf("%i ",i);
            }
        }
        printf("\n\n");
    }
    return 0;
}

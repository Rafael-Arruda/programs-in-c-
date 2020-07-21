#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    int aux;
    int tam = 5;
    int lista[tam];

    for(int i=0;i<tam;i++){
        printf("Digite o valor %i: ",i);
        scanf("%i",&lista[i]);
    }

    for(int x=0;x<tam;x++){
        for(int y=x;y<tam;y++){
            if(lista[x] > lista[y]){
                aux = lista[x];
                lista[x] = lista[y];
                lista[y] = aux;
            }
        }
    }

    printf("\nOs valores digitados em ordem(crescente) foram ");
    for(int j=0;j<tam;j++){
        printf("%i ",lista[j]);
    }
    printf("\n\n");

    return 0;
}


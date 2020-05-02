#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>

int main(){

  //setlocale(LC_ALL,"");

  int vetor[10];
  int i,j,k;
  int aux;
  int cont;
  int maior;
  int pos;

  while(i<10){  //lendo 10 valores distintos e armazenando no vetor.
    cont = 0;
    printf("Digite um valor:");
    scanf("%i",&aux);
    for(j=0;j<10;j++){
      if(aux != vetor[j]){
        cont++;
      }
    }if(cont == 10 && aux >= 0){
      vetor[i] = aux;
      i++;
    }
  }

  maior = vetor[0];
  for(k=0;k<10;k++){
    if(vetor[k] > maior){
      maior = vetor[k];
      pos = k;
    }
  }
  printf("%i\n%i\n",maior,pos);
  return 0;
}

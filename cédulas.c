#include <stdio.h>

int main(void) {
  int valor;
  printf("Digite um valor : ");
  scanf("%i",&valor);
  
  printf(" %i\n ",valor);
  printf("%i nota(s) de R$ 100,00\n",valor/100);
  printf(" %i nota(s) de R$ 50,00\n",(valor%100)/50);
  printf(" %i nota(s) de R$ 20,00\n",((valor%100)%50)/20);
  printf(" %i nota(s) de R$ 10,00\n",(((valor%100)%50)%20)/10);
  printf(" %i nota(s) de R$ 5,00\n",((((valor%100)%50)%20)%10)/5);
  printf(" %i nota(s) de R$ 2,00\n",(((((valor%100)%50)%20)%10)%5)/2);
  printf(" %i nota(s) de R$ 1,00\n",((((((valor%100)%50)%20)%10)%5)%2)/1);
  printf("\n");
  return 0;
}

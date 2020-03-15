#include <stdio.h> 

int main(){
  
  int tempo,hora,min,seg;

  printf("informe o tempo em segundos:\n");
  scanf("%i",&tempo);

  hora = tempo/3600;
  min = (tempo%3600)/60;
  seg = (tempo%3600)%60;

  printf("%i:%i:%i",hora,min,seg);

  return 0;
}

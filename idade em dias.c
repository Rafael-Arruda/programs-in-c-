#include <stdio.h> 

int main(){
  
  int idade,ano,meses,dias;
  printf("Informe sua idade em dias: ");
  scanf("%i",&idade);

  ano = idade/365;
  meses = (idade%365)/30;
  dias = (idade%365)%30;

  printf("%i ano(s)\n",ano);
  printf("%i mes(es)\n",meses);
  printf("%i dia(s)\n",dias);

  return 0;
}

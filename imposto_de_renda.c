#include <stdio.h>

int main(void) {

  float imposto ; 
  float sal,aux;
 
  printf("Digite seu salário: ");
  scanf("%f",&sal);

  aux = sal;

  if (sal > 4500.00){
    sal = sal - 4500;
    imposto += (28*sal)/100;
    sal = sal -sal + 4500;
  }if(sal >= 3000.01 && sal <= 4500){
    sal = sal - 3000;
    imposto += (18*sal)/100;
    sal = sal - sal + 3000;
  }if(sal >= 2000.01 && sal <= 3000.00){
    sal = sal - 2000;
    imposto += (8*sal)/100;
    sal = sal - sal + 2000;
  }
  
  if(aux <= 2000){
    printf("Isento\n");
  }else{
    printf("R$ %.2f\n",imposto);
  }

  return 0;
}

#include <stdio.h>

int main(void) {
  float a,b,c;

  printf("Digite os valores de A, B e C:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);

  if (a < b+c && b < a+c && c < a+b){
    printf("Perimetro = %.1f\n",a+b+c);
  }else{
    printf("Area = %.1f\n",((a+b)*c)/2);
  }
  return 0;
}

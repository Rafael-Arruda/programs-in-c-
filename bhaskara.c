#include <stdio.h>
#include <math.h>

int main(){

  float a,b,c,delta,r1,r2;
  printf("Informe a, b e c:");
  scanf("%f %f %f",&a,&b,&c);

  delta = (b*b) -(4*a*c);

  if (delta < 0){
    printf("Impossivel calcular\n");
  }else if(a == 0){
    printf("Impossivel calcular\n");
  }else {
    r1 = (-b + sqrt(delta))/(a+a);
    r2 = (-b - sqrt(delta))/(a+a);
    printf("R1 = %.5f\n",r1);
    printf("R2 = %.5f\n",r2);
  }
  return 0;
}

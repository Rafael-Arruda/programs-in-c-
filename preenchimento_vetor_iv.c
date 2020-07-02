#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL,"");
  int par[5];
  int impar[5];
  int k;
  int p=0;
  int i=0;
  int j;
  int num;

  for(k=0;k<15;k++){
    scanf("%i",&num);
    if(num%2 == 0){
        par[p] = num;
        p++;
    }else{
        impar[i] = num;
        i++;
    }
    if(p==5){
        p = 0;
        for(j=0;j<5;j++){
            printf("par[%i] = %i\n",j,par[j]);
        }
    }else if(i==5){
        i = 0;
        for(j=0;j<5;j++){
            printf("impar[%i] = %i\n",j,impar[j]);
        }
    }
  }
  for(j=0;j<i;j++){
    printf("impar[%i] = %i\n",j,impar[j]);
  }
  for(j=0;j<p;j++){
    printf("par[%i] = %i\n",j,par[j]);
  }

  return 0;
}

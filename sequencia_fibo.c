#include <stdio.h>

int main(void) {
  
  int n,i,j;
  int pos;
  int fibo[100];
  fibo[0] = 0;
  fibo[1] = 1;

  scanf("%i",&n);

  for(i=0;i<n;i++){
    scanf("%i",&pos);
    for(j=2;j<pos+1;j++){
      fibo[j] = fibo[j-1] + fibo[j-2];
    }
    printf("Fib(%i) = %i\n",pos,fibo[pos]);
  }

  return 0;
}

#include <stdio.h>

int main(void) {

  int i;
  int j=60;
  
  for(i=1;j>=0;i+=3){
    printf("I=%i ",i);
    printf("J=%i\n",j);
    j-=5;
  }

  return 0;
}

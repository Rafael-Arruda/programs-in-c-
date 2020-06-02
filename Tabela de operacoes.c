#include <stdio.h>
#include <string.h>

int soma(int a,int b){
  int s;
  s = a + b;
  return s;
}

int produto(int a, int b){
  int r;
  r = a*b;
  return r;
}

int sub(int a,int b){
  int s;
  s = a - b;
  return s;
}

int div(int a,int b){
  int d;
  d = a/b;
  return d;
}

int main(void) { //funcao principal 
  
  int op=1;
  int resultado;
  int a,b;
  char res[3];
  int resposta;
  printf("Deseja fazer contas?[S/N]: ");
  scanf("%s",res);

  resposta = stricmp(res,"Sim");

  if(resposta == 0){
    while(op != 5){
      printf("======TABELA DE OPERAÇÕES======\n");
      printf("1 - SOMA\n2- SUBTRAÇÃO \n3 - MULTIPLICAÇÃO\n4 - DIVISÃO\n5 - SAIR DO PROGRAMA\n\n");
      printf("Qual opçao deseja: ");
      scanf("%i",&op);
      if(op == 1){
        printf("Digite o valor de A: ");
        scanf("%i",&a);
        printf("Digite o valor de B: ");
        scanf("%i",&b);
        resultado = soma(a,b);
        printf("A soma entre %i e %i é igual a: %i\n\n",a,b,resultado);
      }else if(op == 2){
        printf("Digite o valor de A: ");
        scanf("%i",&a);
        printf("Digite o valor de B: ");
        scanf("%i",&b);
        resultado = sub(a,b);
        printf("A subtração entre %i e %i é igual a: %i\n\n",a,b,resultado);
      }else if(op == 3){
        printf("Digite o valor de A: ");
        scanf("%i",&a);
        printf("Digite o valor de B: ");
        scanf("%i",&b);
        resultado = produto(a,b);
        printf("A multiplicação entre %i e %i é igual a: %i\n\n",a,b,resultado);
      }else if(op == 4){
        printf("Digite o valor de A: ");
        scanf("%i",&a);
        printf("Digite o valor de B: ");
        scanf("%i",&b);
        resultado = div(a,b);
        printf("A divisão entre %i e %i é igual a: %i\n\n",a,b,resultado);
      }else if(op == 5){
        break;
      }else{
        printf("Opção inválida,Tente novamente!\n");
      }
    }
  }else{
    printf("Ok! Fim do Programa\n");
  }
  printf("Volte Sempre!\n");
  return 0;
}

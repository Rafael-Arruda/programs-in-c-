#include <stdio.h>

int main(){
  int soma = 0;
  int opcao;
  int l;
  int c;
  printf("Digite a qtd de linhas da matriz:");
  scanf("%i",&l);
  printf("Digite a qtd de colunas da matriz:");
  scanf("%i",&c);
  int matriz[l][c];
  for (int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      printf("Digite o elemento para a posição %d%d da matriz: ",i+1,j+1);
      scanf("%d",&matriz[i][j]);
    }
  }

  printf("Matriz\n");
  for (int i=0;i<l;i++){
    printf("[ ");
    for(int j=0;j<c;j++){
      printf("%d ",matriz[i][j]);
    }printf("]\n");  
  }

  printf("OPÇÕES\n1-Transposta da matriz\n2-Soma da diagonal principal\n3-Sair do programa\n\n");
  printf("Sua resposta :");
  scanf("%i",&opcao);
  printf("\n");

  switch(opcao){
    case 1:
      printf("Transposta da matriz\n");
      for (int i=0;i<l;i++){
        printf("[ ");
        for(int j=0;j<c;j++){
          printf("%i ",matriz[j][i]);
        }printf("]\n");
      }
      break;
    case 2:
      printf("Soma da diagonal principal\n");
      for (int i=0;i<l;i++){
        soma = soma + matriz[i][i];
      }
      printf("Resultado : %d",soma);
      break;
    case 3:
      printf("Saindo do programa");
      break;
    default:
      printf("opção inválida");
  }
  return 0;
}

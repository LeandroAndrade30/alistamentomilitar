#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char resposta;

  typedef struct {
    char nome[50];
    float altura;
    int idade;
    char sexo;
  } DadosAlistamento;

  do{

  DadosAlistamento alistamento;
  printf("Informe o nome: ");
  scanf("%s", alistamento.nome);
  printf("Informe a altura: ");
  scanf("%f", &alistamento.altura);
  printf("Informe a idade: ");
  scanf("%d", &alistamento.idade);
  printf("Informe o sexo: ");
  scanf(" %c", &alistamento.sexo);
  printf("\nNome: %s\n", alistamento.nome);
  printf("Altura: %.2f\n", alistamento.altura);
  printf("Iddae: %d\n", alistamento.idade);
  printf("Sexo: %c\n", alistamento.sexo);

  if(alistamento.idade >=18 && alistamento.sexo == 'M' ||alistamento.sexo=='m' && alistamento.altura >=1.75)
  {
    printf("Alistamento Obrigatório");
  }
  else
  {
    printf("Alistamento não Obrigatório");
  }
    printf("\n\n");
    printf("Deseja cadastrar outro alistamento? (S/N: ");
    scanf(" %c", &resposta);
  }while(resposta != 'N' && resposta!='n');
  printf("\n");
  printf("Fim do programa");
    return 0;
}

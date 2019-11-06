#include <stdio.h>

/*4) (3,0) A somatória dos números inteiros de 1 até n pode ser definida como:
S(n) = {
1
n + S(n − 1)
n=1
n>1
Escreva um programa que calcule o somatório acima, utilizando recursão. Você deve usar o
seguinte protótipo de função:
int soma (int num);*/

int soma(int num);

int main(void) {
  int n;
  printf("Digite n\n");
  scanf("%d",&n);
  printf("O resultado desse somatorio eh %d\n",soma(n));
  return 0;
}

int soma(int num){
  if (num<1) return 0;
  if (num==1) return 1;
  if (num>1) return (num+soma(num-1)); 
}

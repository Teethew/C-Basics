#include <stdio.h>

/*3) (2,5) Faça um programa que receba a temperatura e um inteiro (denominado opção). Este
programa deverá converter a temperatura inserida em Celsius para Fahrenheit e vice-versa
(opção = 1 para converter de Celsius para Fahrenheit e opção = 2 para converter de
Fahrenheit para Celsius).
Para a conversão, você pode usar a seguinte equação:
C
F − 32
=
100
180
o programa deverá ter uma função, sendo o protótipo dela:
double converte (double temperatura, int opcao);*/

double converte (double temperatura, int opcao);

int main(void) {
  int op;
  double temp;
  printf("Digite a temperatura\n");
  scanf("%lf",&temp);
  printf("Digite 1 para converter de Celsius p/ Fahrenheit e 2 para o contrario\n");
  scanf("%d",&op);
  if(op!=1 && op!=2){
    printf("Opcao invalida, encerrando o programa.\n");
    return 0;
  }
  printf("Resultado da conversao: %2.lf",converte(temp,op));
  if (op==1) printf(" Fahrenheit.\n");
  if (op==2) printf(" Celsius.\n");
  return 0;
}

double converte(double temperatura, int opcao){
  if (opcao==1){
    temperatura = (180*temperatura)/100 + 32;
    return temperatura; 
  }
  if (opcao==2){
    temperatura = (temperatura -32)*100/180;
    return temperatura;
  }
}

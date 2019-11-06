#include <stdio.h>

/*2) (2,5) Ms. Maria went to a store to buy shoes. The payment methods that
were offered to her were:
- In cash with 10% descount;
- Entry + 2 times w/o descount;
- 10 installments with interest of 5% over the total price.
Show the amount Ms. Maria will pay on each one of the payment methods and
the amount of each installment, in the case she choose to split.*/
//The program is currently written in Portuguese (PT-BR).
/*vista = in cash
  entrada = entry
  parcela = installment
  juros = interest*/

double vista(double valor);
double entrada(double valor);
double parcela_sDes(double valor);
double parcela(double valor);
double prazo(double valor);

int main(void) {
  double valor;
  printf("Qual eh o valor total da compra?\n");
  scanf("%lf",&valor);
  printf("Valor a vista com 10 porcento de desconto: %.2lf\n\nNo caso de entrada e mais 2 parcelas sem desconto, os valores sao:\nEntrada: %.2lf\nParcelas sem desconto: 2x de %.2lf\n\n Caso a compra seja parcelada em 10 vezes o valor de cada parcela sera de %.2lf e o valor total sera de %.2lf\n",vista(valor),entrada(valor),parcela_sDes(valor),parcela(valor),prazo(valor));
  return 0;
}

double vista(double valor){
  return (valor*0.9);
}

double entrada(double valor){
  return (valor*0.5);
}

double parcela_sDes(double valor){
  return (valor*0.25);
}

double parcela(double valor){
  return ((valor*1.05)/10);
}

double prazo(double valor){
  return valor*1.05;
}

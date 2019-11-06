#include <stdio.h>

/*2) (2,5) Dona Maria foi a uma loja para comprar sapatos. As formas de pagamentos que
foram oferecidas a ela foram:
- À vista com 10% de desconto;
- Entrada + 2 vezes sem desconto;
- Parcelada em 10 vezes com juros de 5 % sobre o valor total.
Exiba os valores que Dona Maria irá pagar no total em cada uma das formas de pagamento e
os valores de cada parcela, caso ela opte em parcelar.*/

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

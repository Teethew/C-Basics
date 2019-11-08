#include <stdio.h>

/*3) (2,5) Write a program that asks for a temperature and an int (the option). This
program must convert the temperature inserted in Celsius to Fahrenheit and vice versa.
(option = 1 to convert Celsius to Fahrenheit and option = 2 to
Fahrenheit to Celsius).
You will need this:
C/100 = (F-32)/180
The program must have the following function
double converte (double temperatura, int opcao);*/
//*This program is written in Brazilian Portuguese

double converte (double temperatura, int opcao);

int main(void) {
  int op;
  double temp;
  printf("What's the temperature?\n");
  scanf("%lf",&temp);
  printf("Type 1 to convert Celsius to Fahrenheit e 2 for the other way around\n");
  scanf("%d",&op);
  if(op!=1 && op!=2){
    printf("Invalid option, program ended.\n");
    return 0;
  }
  printf("Converting result: %2.lf",converte(temp,op));
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

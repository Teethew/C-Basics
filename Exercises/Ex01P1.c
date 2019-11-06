#include <stdio.h>
#include <math.h>

/*1)(2,0)Crie um programa para calcular a área e o perímetro de figuras geométricas. Faça o
cálculo para as seguintes figuras: quadrado, círculo e triângulo. Para calcular a área do
triângulo, utilize a fórmula de Heron:
A = √p(p − a)(p − b)(p − c)
sendo
a, b e c os lados do triângulo;

p=(a+b+c)/2.*/

char g_v[] = {'a','b','c'};

void array_Reader(double vec[]);
void quadrado(double a);
void circ(double a);
void tri(double a,double b,double c);

int main(void) {
  
  double valores[] = {0,0,0};
  array_Reader(valores);
  quadrado(valores[0]);
  circ(valores[0]);
  tri(valores[0],valores[1],valores[2]);  
  return 0;
}

void array_Reader(double vec[]){
  for(int i = 0; i<3; i++){
    printf("Digite %c\n",g_v[i]);
    scanf("%lf",&vec[i]);
  }
}

void quadrado(double a){
  printf("O perimetro e area do quadrado de lado 'a' sao respectivamente: %.2lf , %.2lf\n",(4*a),(a*a));
}

void circ(double a){
  printf("O perimetro e area do circulo de raio 'a' sao respectivamente: %.2lf , %.2lf\n",(3.14*2*a),(3.14*(a*a)));
}

void tri(double a,double b, double c){
  double p = (a+b+c)/2;
  printf("O perimetro e area do triangulo de lados 'a' 'b' e 'c' sao respectivamente: %.2lf , %.2lf\n",p,(sqrt(p*(p-a)*(p-b)*(p-c))));
}

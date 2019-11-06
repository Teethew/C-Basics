#include <stdio.h>
#include <math.h>

/*1)(2,0)Create a program to calculate the area and the perimeter of geometric shapes. Do the calculation for the following shapes: square,
circle and triangle. To calculate the area of the triangle, use the Heron's formula:
A = √p(p − a)(p − b)(p − c)
being
a, b and c the sides of the triangle;

p=(a+b+c)/2.*/

char g_v[] = {'a','b','c'};

void array_Reader(double vec[]);
void square(double a);
void circ(double a);
void tri(double a,double b,double c);

int main(void) {
  
  double sizes[] = {0,0,0};
  array_Reader(sizes);
  square(sizes[0]);
  circ(sizes[0]);
  tri(sizes[0],sizes[1],sizes[2]);  
  return 0;
}

void array_Reader(double vec[]){
  for(int i = 0; i<3; i++){
    printf("Type %c\n",g_v[i]);
    scanf("%lf",&vec[i]);
  }
}

void square(double a){
  printf("The perimeter and area of a square of side 'a' are respectively: %.2lf , %.2lf\n",(4*a),(a*a));
}

void circ(double a){
  printf("The perimeter and area of a circle of radius 'a' are respectively: %.2lf , %.2lf\n",(3.14*2*a),(3.14*(a*a)));
}

void tri(double a,double b, double c){
  double p = (a+b+c)/2;
  printf("The perimeter and area of a triangle of sides 'a', 'b', and 'c' are respectively: %.2lf , %.2lf\n",p,(sqrt(p*(p-a)*(p-b)*(p-c))));
}

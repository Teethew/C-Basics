#include <stdio.h>

/*4) (3,0) The summation of the integers from 1 to n can be defined as:
S(n) = /1;            for n=1\ 
       \n + S(n − 1); for n>1/
Write a program that calculates the summation above, using recursion. You must use the
following prototype of function:
int soma (int num);*/

int soma(int num);

int main(void) {
  int n;
  printf("This program calculates the summation Σ (from i to n) of i");
  printf("Type n\n");
  scanf("%d",&n);
  printf("The result of this summation is %d\n",soma(n));
  return 0;
}

int soma(int num){
  if (num<1) return 0;
  if (num==1) return 1;
  if (num>1) return (num+soma(num-1)); 
}

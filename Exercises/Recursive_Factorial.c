#include <stdio.h>

int Factorial(int n);

int main(void) {
  int n;
  // Portuguese
  printf("Digite n\n");
  scanf("%d",&n);
  printf("O fatorial de %d é %d\n",n,Factorial(n));
  
   // English
  /*printf("Type n\n");
  scanf("%d",&n);
  printf("The factorial of %d is %d\n",n,Factorial(n));*/
  
  return 0;
}

int Factorial(int n){
  if (n==0) return 1;
  else return n*Factorial(n-1);
}

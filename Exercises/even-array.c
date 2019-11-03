#include <stdio.h>
#include <stdlib.h>

/*Make a recursive function that receive an array of integers and returns how many
of them are even.
> int conta_pares(int v[], int n);*/

int n;
void randomiza_Vetor(int v[], int n);
int conta_Pares(int v[], int n);

int main(void){
  
  printf("Type a number \n");
  scanf("%d", &n);

  int pares;
  printf("----------------- \n");
  int v[n];
  randomiza_Vetor(v, n);
  printf("----------------- \n");
  pares = conta_Pares(v, n);
  printf("The number of even numbers in this array is %d \n",pares);

  return 0;
}

void randomiza_Vetor(int v[], int n){
  for(int i=0;i<n;i++){
    v[i] = rand() % 100;
    printf("%d ",v[i]);
  }
  printf(" \n");
}

int conta_Pares(int v[], int n){
  if (n==0){
    if (v[n]%2==0) return 1;
    else return 0;
  }
  else{
    if (v[n]%2==0) return 1 + conta_Pares(v,n-1);
    else return 0 + conta_Pares(v,n-1);
  }
}




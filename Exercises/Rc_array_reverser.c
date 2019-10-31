#include <stdio.h>

int g_n;

void array_Reader(int n, int vec[]);
void array_Printer(int n, int vec[]);
void reverse_Printer(int v[], int n);

int main(void) {
  printf("Type n\n");
  scanf("%d",&g_n);
  int *n = &g_n;
  int ar1[*n];
  array_Reader(*n,ar1);
  array_Printer(*n,ar1);
  printf("The reverse array is \n[ ");
  reverse_Printer(ar1,*n);
  return 0;
}
void array_Reader(int n, int vec[]){
  for(int i = 0; i<n; i++){
    printf("There are %d empty spaces remaining\n",n-i);
    scanf("%d\n",&vec[i]);
  }
}
void array_Printer(int n, int vec[]){
  printf("The array stored is\n[ ");
  for(int i = 0; i<n-1; i++){
    printf("%d ",vec[i]);
  }
  printf("%d ]\n",vec[n-1]);
}

void reverse_Printer(int v[], int n) {
  
  if (n == 0) {
    printf("]\n");
    return;
  }
  // The order makes all the diference here
  printf("%d ", v[n-1]);
  reverse_Printer(v, n-1);
}

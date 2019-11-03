#include <stdio.h>
#include <stdlib.h>

/*Make a program that generate a
random matrix n x n (n is even) and after that
print its result folded, first horizontally and after vertically*/

int n;
//creates a random matrix of  n x n size
void randomiza_Matriz(int m[][n], int n);
//prints the matrix
void printa_Matriz(int m[][n], int n);
//folds the matrix
void dobra_Matriz(int m[][n], int n);

int main(void){

  printf("Type an even number: ");
  scanf("%d", &n);

  int m[n][n];
  randomiza_Matriz(m, n);
  printf("----------------- \n");
  printa_Matriz(m, n);
  printf("----------------- \n");
  dobra_Matriz(m, n);

  return 0;
}

void randomiza_Matriz(int m[][n], int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      m[i][j] = rand() % 10;
    }
  }
}

void printa_Matriz(int m[][n], int n){
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",m[i][j]);
    }
    printf(" \n");
  }
}

void dobra_Matriz(int m[][n], int n){
  int soma1[n][n/2];
  int soma2[n/2][n/2];
  for(int i=0;i<(n);i++){
    for(int j=0;j<(n/2);j++){
      soma1[i][j] = (m[i][j]+m[i][(n-1)-j]);
      printf("%d ",soma1[i][j]);
    }
    printf("\n");
  }
  printf("----------------- \n");
  for(int i=0;i<(n/2);i++){
    for(int j=0;j<(n/2);j++){
      soma2[i][j] = (soma1[i][j]+soma1[(n-1)-i][j]);
      printf("%d ",soma2[i][j]);
    }
    printf(" \n");
  }
}

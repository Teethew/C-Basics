#include <stdio.h>
#include <math.h>

int main(void) {
  int i = 0;
  int n;
  scanf("%d",&n);
  double x[n];
  for(int i;i<n;i++){
    scanf("%lf",&x[i]);
  }

  //double media = (x[0]+x[1]+x[2])/3;
  double somatorio = 0;

  
  for(int i;i<n;i++){
    //printf("%lf ",x[i]);
    somatorio += pow(x[i],2); 
  }

  somatorio = sqrt(somatorio);
  //printf("Media: %lf\n",media);
  printf("Incerteza: %lf\n",somatorio);
  return 0;
}

#include <stdio.h>
#include <math.h>

int main(void) {
  int i = 0;
  double x[] = {0.0,0.0,0.0};
  for(int i;i<3;i++){
    scanf("%lf",&x[i]);
  }

  double media = (x[0]+x[1]+x[2])/3;
  double somatorio = 0;

  for(int i;i<3;i++){
    //printf("%lf ",x[i]);
    somatorio += pow((x[i] - media),2); 
  }

  somatorio = sqrt((somatorio/6));
  printf("Media: %lf\n",media);
  printf("Incerteza: %lf\n",somatorio);
  return 0;
}

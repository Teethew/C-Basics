#include <stdio.h>
#include <stdlib.h>

//o codigo pede por 2 horarios diferentes e calcula a diferenca entre eles (caso o horario final seja menor que o inicial, subentende-se que se trata do dia seguinte) 

struct cronometro {
  int hora;
  int min;
  int seg; 
};

typedef struct cronometro relogio;

void printIntervalo(relogio r1, relogio r2);

int main(){
  relogio r1;
  relogio r2;
  r1.seg = -1;
  r2.seg = -1;

  //verificacao do formato de hora
  printf("Digite o horario inicial e final no formato 00:00:00 (horas, minutos e segundos)\n");
  while(r1.seg == -1){
    scanf("%d", &r1.hora);
    scanf("%d", &r1.min);
    scanf("%d", &r1.seg);
    if(r1.seg>=60 || r1.seg <0 || r1.min >=60 || r1.min <0 || r1.hora >=24 || r1.hora <0){
      printf("Formato de hora invalido");
      return 0;
    }
    printf("Hora inicial: %d:%d:%d\n", r1.hora,r1.min,r1.seg);
  }

  //idem
  while(r2.seg == -1){
    scanf("%d", &r2.hora);
    scanf("%d", &r2.min);
    scanf("%d", &r2.seg);
    printf("Hora final: %d:%d:%d\n", r2.hora,r2.min,r2.seg);
    if(r2.seg>=60 || r2.seg <0 || r2.min >=60 || r2.min <0 || r2.hora >=24 || r2.hora <0){
      printf("Formato de hora invalido");
      return 0;
    }
    printIntervalo(r1,r2);
  }
}

void printIntervalo(relogio r1, relogio r2){
  relogio rf;
  //caso 0
  if((r1.hora>=24 || r2.hora>=24) || (r1.min>=60 || r2.min>=60) || (r1.seg>=60 || r2.seg>=60)){
    printf("Formato de hora invalido!");
    return;
  }
  //caso 1
  if(r1.hora > r2.hora){
    rf.hora = (r2.hora+24)-r1.hora;
    //caso 1.1
    if(r1.min > r2.min){
      rf.min = (r2.min+60)-r1.min;
      if(r1.seg > r2.seg) rf.seg = r2.seg+60-r1.seg;
      else rf.seg = r2.seg - r1.seg;
    }
    //caso 1.2
    else {
      rf.min = r2.min - r1.min;
      if(r1.seg > r2.seg) rf.seg = r2.seg+60-r1.seg;
      else rf.seg = r2.seg - r1.seg;
    }
    //caso 2
  } else{
    rf.hora = r2.hora-r1.hora;
    //caso 2.1
    if(r1.min > r2.min){
      rf.min = (r2.min+60)-r1.min;
      if(r1.seg > r2.seg) rf.seg = r2.seg+60-r1.seg;
      else rf.seg = r2.seg - r1.seg;
    }
    //caso 2.2
    else {
      rf.min = r2.min - r1.min;
      if(r1.seg > r2.seg) rf.seg = r2.seg+60-r1.seg;
      else rf.seg = r2.seg - r1.seg;
    }
  }
  
  printf("Intervalo: %dh %dmin %ds\n",rf.hora,rf.min,rf.seg);
}

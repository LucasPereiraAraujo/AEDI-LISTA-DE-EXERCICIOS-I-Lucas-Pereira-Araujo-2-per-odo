#include<stdio.h>
#include <math.h>

int main(){
  float tGasto, vMedia, lGastos;
  
  printf("Insira (em horas) o tempo gasto na viajem: ");
  scanf("%f", &tGasto);
  
  printf("Digite a velocidade media em km/h da viajem: ");
  scanf("%f", &vMedia);
  
  lGastos = (tGasto * vMedia) /  12;
  
  printf("A quantidade de litros gastos foi de: %f", lGastos);
  
  return 0;
  
	}

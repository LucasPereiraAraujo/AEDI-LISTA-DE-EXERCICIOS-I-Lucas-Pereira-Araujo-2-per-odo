#include<stdio.h>

int main(){
  float lado;
  
  printf("Insira em M o lado do quadrado: ");
  scanf("%f", &lado);
  
  lado = lado * lado  ;

  lado = lado * 2;
  
  printf("O dobro da area do quadrado equivale a: %f", lado);
  
  return 0;
  
	}

#include<stdio.h>
#include <math.h>

int main(){
 float qtdPescada;
 
 printf("Ze Olho de Gato, insira a quantidade de peixes pescados em KG");
 scanf("%f", &qtdPescada);
 
 if(qtdPescada > 50){
 	qtdPescada = qtdPescada - 50;
 	printf("Infelizmente a quantidade pescada passou de 50... a coleta de hoje excedeu a cota em %f KG. A multa de R$4 sera aplicada.", qtdPescada);
 } else {
 	
 	printf("Relaxe, Ze Olho de Gato, hoje voce nao pagara a multa, mas talvez nao tenha dinheiro pra colocar comida na mesa...");
 }
	
	return 0;
	}

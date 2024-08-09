#include<stdio.h>

int main(){
	float temperatura;
	
	printf("Insira temperatura em Celsius para ser transformada em Fahrenheit: ");
	scanf("%f", &temperatura);
	
	temperatura = 32 + (temperatura * 1.8);
	
	printf("Esta temperatura em Fahrenheit equivale a: %f °F", temperatura);
	
	return 0;
}

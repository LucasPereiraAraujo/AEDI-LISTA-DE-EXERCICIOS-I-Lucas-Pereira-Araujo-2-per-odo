#include<stdio.h>
#include <math.h>

int main(){
	int n1, produto;
	float n2, soma, raiz;
	
	printf("Insira um numero inteiro: ");
	scanf("%d", &n1);
	
	printf("Insira um segundo numero, podendo este ser fracional mas nao igual a 0: ");
	scanf("%f", &n2);
	
	if(n2 == 0){
		printf("O segundo numero nao pode ser igual a zero, cabecudo");
		
		return 1;
	}
	
	produto = n1 * 2;
	
	printf("\nO produto do dobro do primeiro numero digitado e: %d", produto);
	
	soma = (n1 * 3) + (n2 / 2);
	
	printf("\nA soma do triplo do primeiro numero com a metade do segundo numero e: %f", soma);
	
	raiz = n1 + n2;
	raiz = sqrt(raiz);
	
	printf("\nA raiz quadrada da soma do primeiro numero com o segundo número e: %f", raiz);
	
	return 0;
	}

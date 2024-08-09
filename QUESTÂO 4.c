#include<stdio.h>
#include <math.h>

int main(){
	float preco;
	
	printf("Insira o custo de fabrica do veiculo: ");
	scanf("%f", &preco);
	
	preco = preco + (preco * 0.28) + (preco * 0.45);
	
	printf("O preco final desse veiculo ira ser: R$ %f", preco);
 
  return 0;
  
	}

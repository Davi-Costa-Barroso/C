//Davi Costa Barroso, questão 15
#include <stdio.h>
float soma(float x[20]){
	int i;
	float soma = 0;
	for(i=0;i<20;i++){
		soma += x[i];
	}
	return soma;
}
int main(){
	float x[20];
	int i;
	for(i=0;i<20;i++){
		printf("Digite valor %d: ", i);
		scanf(" %f", &x[i]);		
	}
	printf("Soma dos valores: %.3f", soma(x));
}

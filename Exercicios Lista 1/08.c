#include <stdio.h>
//Davi Costa Barroso, Questao 08
int main(){
	float mercadoria, entrada;
	int prestacao;
	printf("Valor da mercadoria: ");
	scanf(" %f", &mercadoria);
	prestacao = mercadoria / 3;
	entrada = mercadoria - (2* prestacao);
	printf("A entrada custa R$ %.2f e cada prestao custa R$ %d", entrada, prestacao);
	return 0;
}

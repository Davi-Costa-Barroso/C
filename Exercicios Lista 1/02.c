#include <stdio.h>
//Davi Costa Barroso, Questao 02
int main(){
	float precoLitro, valorPago, qtdLitrosColocados;
	printf("Digite preco do litro: ");
	scanf(" %f", &precoLitro);
	printf("Digite valor pago: ");
	scanf(" %f", &valorPago);
	qtdLitrosColocados = valorPago/precoLitro;
	printf("Colocou %.2f litros no tanque", qtdLitrosColocados);
	return 0;
}

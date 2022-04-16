#include <stdio.h>
//Davi Costa Barroso, Questao 06
int main(){
	float qtdSanduiches, queijo, presunto, carne;
	printf("Informe quantidade de sanduiches: ");
	scanf(" %f", &qtdSanduiches);
	queijo = (100 * qtdSanduiches)/1000;
	presunto = (50 * qtdSanduiches)/1000;
	carne = queijo;
	printf("\nE necessario comprar:");
	printf("\nQuantidade de quejo: %.2f Kg", queijo);
	printf("\nQuantidade de presunto: %.2f Kg", presunto);
	printf("\nquantidade de carne: %.2f Kg", carne);
	return 0;
}

#include <stdio.h>
//Davi Costa Barroso, Questao 07
int main(){
	float peso, engordar, emagrecer;
	printf("Digite peso: ");
	scanf(" %f", &peso);
	engordar = peso + (peso * 0.15);
	emagrecer = peso - (peso * 0.2);
	printf("O peso e %.2f se engordar", engordar);
	printf("\nO peso e %.2f se emagrecer", emagrecer);
	return 0;
}

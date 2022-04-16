#include <stdio.h>
//Davi Costa Barroso, Questao 12
int main(){
	float area, somaArea = 0, base, altura, media, i;
	for(i=1;i<=5;i++){
		printf("\nCalcular area do triangulo %.0f", i);
		printf("\nDigite base: ");
		scanf(" %f", &base);
		printf("Digite altura: ");
		scanf(" %f", &altura);
		area = (base * altura)/2;
		somaArea += area;
	}
	media = somaArea / 5;
	printf("\nMedia das areas: %.2f", media);
	return 0;
}

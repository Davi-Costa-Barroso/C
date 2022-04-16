#include <stdio.h>
//Davi Costa Barroso, Questao 01
int main(){
	float baseMaior, baseMenor, altura, area;
	printf("Digite base maior: ");
	scanf(" %f", &baseMaior);
	printf("Digite base menor: ");
	scanf(" %f", &baseMenor);
	printf("Digite altura: ");
	scanf(" %f", &altura);
	area = ((baseMaior + baseMenor)*altura)/2;
	printf("A area do trapezio e: %.2f", area);
	return 0;
}

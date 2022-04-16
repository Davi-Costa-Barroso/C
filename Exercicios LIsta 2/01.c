#include <stdio.h>
//Davi Costa Barroso, Questao 01
float areaCirculo(float raio){
	return (3.14 * (raio*raio));
}
int main(){
	float raio;
	printf("Digite raio do circulo: ");
	scanf(" %f", &raio);
	printf("A area do circulo e %.2f", areaCirculo(raio));
}

//Davi Costa Barroso, questao 10
#include <stdio.h>
int triangulo(float x, float y, float z){
	int tipoTriangulo;
	if(((x >= (z+y)) || (y >= (x+z)) || (z >= x+y) )){
		//Não forma um triangulo
		tipoTriangulo = 0;
	}
	else if((x == y) && (y == z)){
		//Equilatero
		tipoTriangulo = 1;
	}
	else if((x == y) && (x != z) || (y == z) && (y != x) || (x == z) && (z != y) ){
		//Isosceles
		tipoTriangulo = 2;
	}
	else if((x != y) && (x != z) && (y != z)){
		//Escaleno
		tipoTriangulo = 3;
	}
	return tipoTriangulo;
}
int main(){
	float x, y, z;
	int tipotriangulo;
	printf("Digite valor para x: ");
	scanf(" %f", &x);
	printf("Digite valor para y: ");
	scanf(" %f", &y);
	printf("Digite valor para z: ");
	scanf(" %f", &z);
	
	tipotriangulo = triangulo(x, y, z);
	
	if(tipotriangulo == 0){
		printf("Triangulo nao existe.");
	}
	else if(tipotriangulo == 1){
		printf("Triangulo equilatero.");
	}
	else if(tipotriangulo == 2){
		printf("Triangulo isosceles.");
	}
	else if(tipotriangulo == 3){
		printf("Triangulo escaleno.");
	}
}

//Davi Costa Barroso, questao 12
#include <stdio.h>
int fatorial(int valor){
	int c = 1;
	int fat = valor;
	while(c < valor){
		fat = fat*(valor - c);
		c++;
	}
	return fat;
}
int main(){
	int valor;
	printf("Digite valor inteiro e positivo para calcular fatorial: ");
	scanf(" %d", &valor);
	printf("O fatorial desse valor e %d", fatorial(valor));
}

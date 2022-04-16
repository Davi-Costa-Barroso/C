//Davi Costa Barroso, Questao 06
#include <stdio.h>
typedef int boolean;
#define true 1
#define false 0
boolean verificaPositivo(int valor){
	if(valor > 0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int valor;
	printf("Verifique se o valor e positivo.\n");
	printf("Digite valor: ");
	scanf(" %d", &valor);
	if(verificaPositivo(valor)){
		printf("Positivo");
	}else{
		printf("negativo");
	}
}

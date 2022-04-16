//Davi Costa Barroso, questao 07
#include <stdio.h>
typedef int boolean;
#define true 1
#define false 0
boolean verificarParImpar(int valor){
	int resto;
	resto = valor % 2;
	if(resto == 0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int valor;
	printf("Digite valor inteiro para verificar se e par ou impar: ");
	scanf(" %d", &valor);
	if(verificarParImpar(valor)){
		printf("Par");
	}else{
		printf("Impar");
	}
}

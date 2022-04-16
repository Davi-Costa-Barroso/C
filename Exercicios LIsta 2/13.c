//Davi Costa Barroso, questao 13
#include <stdio.h>
typedef int boolean;
#define true 1
#define false 0
boolean perfeito(int valor){
	int i;
	int somaDiv = 0;
	int resto;
	//Soma os numeros que sao divisiveis pelo valor
	for(i=1;i<valor;i++){
		resto = valor % i;
		if(resto == 0){
			somaDiv += i;
		}
	}
	//Verifica se a soma e igual ao valor
	if(somaDiv == valor){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int valor;
	printf("Descubra se e um numero perfeito\n");
	printf("Digite valor: ");
	scanf(" %d", &valor);
	if(perfeito(valor)){
		printf("Numero perfeito!");
	}else{
		printf("Nao e um numero perfeito!");
	}
}

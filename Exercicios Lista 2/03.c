//Davi Costa Barroso, Questao 03
#include <stdio.h>
typedef int boolean;
#define true 1
#define false 0
boolean verificaPrimo(int valor){
	int resto, cont=2;
	boolean primo = true;
	if(valor == 1){
		primo = false;
	}
	while(cont<valor && primo==true){
		resto = valor % cont;
		if(resto==0){
			primo = false;
		}
		cont++;
	}
	return primo;
}
int main(){
	int valor;
	boolean primo;
	printf("Verifique se o numero e primo.\n");
	printf("Digite valor inteiro e positivo: ");
	scanf(" %d", &valor);
	primo = verificaPrimo(valor);
	if(primo){
		printf("Numero primo");
	}else{
		printf("Numero nao e primo");
	}
}

#include <stdio.h>
//Davi Costa Barroso, Questao 18
int main(){
	int n, fatorial, cont = 1;
	printf("Digite valor inteiro e positivo para calcular seu fatorial: ");
	scanf(" %d", &n);
	fatorial = n;
	while(cont<n){
		fatorial = fatorial * (n - cont);
		cont +=1;
	}
	printf("O fatorial de %d e %d", n, fatorial);
	return 0;
}

#include <stdio.h>
//Davi Costa Barroso, Questao 11
int main(){
	int valor, negativo, i;
	for(i=1;i<=8;i++){
		printf("Digite valor %d: ", i);
		scanf(" %d", &valor);
		if(valor<0){
			negativo +=1;
		}
	}
	printf("\nQuantidade de valores negativos: %d", negativo);
	return 0;
}

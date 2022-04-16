//Davi Costa Barroso, questão 14
#include <stdio.h>
int par(int x[15]){
	int i, qtdPar=0;
	float resto;
	//Verificando se e par
	for(i=0;i<15;i++){
		resto = x[i] % 2;
		if(resto == 0){
			qtdPar +=1;
		}
	}
	return qtdPar;
}
int main(){
	int x[15];
	int i;
	//Ler vetor X
	for(i=0;i<15;i++){
		printf("Digite valor na posicao %d do vetor X: ", i);
		scanf(" %d", &x[i]);		
	}
	printf("\nQuantidade de valores pares em X: %d", par(x));
}

//Davi Costa Barroso, questao 22
#include <stdio.h>
void maiorValor(float b[50]){
	int i;
	float maiorvalor;
	//Verifica maior valor
	for(i=0;i<50;i++){
		if(i==0){
			maiorvalor = b[i];
		}
		else if(b[i] > maiorvalor){
			maiorvalor = b[i];	
		}
	}
	//Divide valores pelo maior valor
	for(i=0;i<50;i++){
		b[i] = b[i] / maiorvalor;
	}	
}
int main(){
	float b[50];
	int i;
	//Ler valores
	for(i=0;i<50;i++){
		printf("Digite valor da posicao %d: ", i);
		scanf(" %f", &b[i]);
	}
	maiorValor(b);
	//Imprime resultado
	printf("\nValores divididos pelo maior valor: \n");
	for(i=0;i<50;i++){
		printf("%.3f ", b[i]);
	}
}

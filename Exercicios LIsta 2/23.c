//Davi Costa Barroso, questao 23
#include <stdio.h>
void ordemCrescente(float a[50]){
	int i, j;
	float aux;
	for(i = 0; i < 50; i++){
		//Compara o valor de uma posicao com todas as outras posicoes
		for(j = 0; j < 50; j++){
			if(a[i] < a[j]){
				aux = a[i];
				a[i] = a[j];	
				a[j] = aux;		
			}	
		}
	}
}
int main(){
	float a[50];
	int i;
	//Ler valores do vetor
	for(i=0;i<50;i++){
		printf("Digite valor da posicao %d: ", i);
		scanf(" %f", &a[i]);
	}
	ordemCrescente(a);
	//Imprime vetor em ordem crescente
	printf("\nEm ordem crescente: \n");
	for(i=0;i<50;i++){
		printf(" %.3f", a[i]);
	}
}

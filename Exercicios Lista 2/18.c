//Davi Costa Barroso, questao 18
#include<stdio.h>
void somaVetor(int a[10],int b[10], int c[10]){
	int i;
	//Somar cada posicao do vetor A e B
	for(i=0; i<10;i++){
			c[i] = a[i] + b[i];
	}

}
int main(){
	int a[10];
	int b[10];
	int c[10];
	int i;
	//Ler vetor A
	for(i=0; i<10;i++){
		printf("Digite valor %d do vetor A: ", i);
		scanf(" %d", &a[i]);
	}
	printf("\n");
	//ler vetor B
	for(i=0; i<10;i++){
		printf("Digite valor %d do vetor B: ", i);
		scanf(" %d", &b[i]);
	}
	somaVetor(a, b, c);
	printf("\n");
	//Imprimir vetor C
	for(i=0; i<10;i++){
		printf("Soma dos valores da posicao %d do vetor C: %d \n", i, c[i]);
	}
}

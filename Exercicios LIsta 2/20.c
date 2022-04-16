//Davi Costa Barroso, questao 20
#include <stdio.h>
typedef int boolean;
#define true 1
#define false 0
void verificaPrimo(int k[15], int p[15]){
	int i;
	for(i=0;i<15;i++){
	int cont = 2;
	int resto;
	boolean primo = true;
	//Se for 1, nao e primo
	if(k[i] == 1){
		p[i] = 0;
	}
	else{
		//Se nao for 1, faca...
		while(cont < k[i] && primo == true){
			resto = k[i] % cont;
			if(resto==0){
				primo = false;
				p[i] = 0;
			}
			cont++;
		}
		if(primo){
			p[i] = k[i];
		}
	}
	}
}
int main(){
	int k[15];
	int i;
	int p[15];
	//Ler vetor K
	for(i=0;i<15;i++){
		printf("Digite valor da posicao %d do vetor K: ", i);
		scanf(" %d", &k[i]);
	}
	verificaPrimo(k, p);
	printf("\nSendo 0 sem valor no vetor");
	printf("\nVetor P:");
	//Imprimir vetor P
	for(i=0;i<15;i++){
		printf("- %d ", p[i]);
	}
}

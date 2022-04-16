//Davi Costa, questao 19
#include <stdio.h>
void modificaVet(int a[25]){
	int i;
	for(i=0;i<25;i++){
		if(a[i] < 0){
			a[i] = 0;
		}
	}
}
int main(){
	int a[25];
	int i;
	//Ler o vetor A
	for(i=0;i<25;i++){
		printf("Digite valor %d do vetor A: ", i);
		scanf(" %d", &a[i]);
	}
	modificaVet(a);
	printf("\n");
	//Imprime vetor A modificado
	for(i=0;i<25;i++){
		printf("- %d ", a[i]);
	}
	
}

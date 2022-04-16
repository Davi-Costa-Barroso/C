//Davi Costa Barroso, questao 17
#include <stdio.h>
void fatorial(int a[10], int b[10]){
	int fat;
	int c, i;
	for(i=0;i<10;i++){
		fat = a[i];
		c = 1;
		//Se o valor for 0 o seu fatorial e 1
		if(a[i] == 0){
			b[i] = 1;
		}
		else{
			//Se o valor nao for 0...
			while(c < a[i]){
				fat = fat * (a[i] - c);
				c++;
			}
			b[i] = fat;	
		}
	}
	
}
int main(){
	int a[10];
	int b[10];
	int i;
	//Ler vetor A
	for(i=0;i<10;i++){
		printf("Digite valor %i do vetor A: ", i);
		scanf(" %d", &a[i]);
	}
	fatorial(a, b);
	printf("\n");
	//Laço para imprimir vetor A
	printf("\nA: ");
	for(i=0;i<10;i++){
		printf("%d - ", a[i]);
	}
	printf("\nB: ");
	//Laço para imprimir vetor B modificado
	for(i=0;i<10;i++){
		printf("%d - ", b[i]);
	}
}

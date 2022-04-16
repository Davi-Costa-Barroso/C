#include <stdio.h>
//Davi Costa Barroso, Questao 13
int main(){
	int valor, i;
	int dentro = 0;
	int fora = 0;
	for(i=1;i<=10;i++){
		printf("Digite valor %d: ", i);
		scanf(" %d", &valor);
		if((valor>=10) && (valor<=20)){
			dentro+=1;
		}else{
			fora+=1;
		}
	}
	printf("\nIntervalo [10, 20]");
	printf("\nQuantos estao dentro: %d", dentro);
	printf("\nQuantos estao fora: %d", fora);
	return 0;
}

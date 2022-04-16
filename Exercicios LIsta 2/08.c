//Davi Costa Barroso, Questao 08
#include <stdio.h>
char conceito(float mediaf){
	char conceito; 
	if((mediaf >= 0) && (mediaf <= 4.9)){
		conceito = 'D';
	}
	else if((mediaf >= 5) && (mediaf <= 6.9)){
		conceito = 'C';
	}
	else if((mediaf >= 7) && (mediaf <= 8.9)){
		conceito = 'B';
	}
	else if((mediaf >= 9) && (mediaf <= 10)){
		conceito = 'A';
	}
	return conceito;
}
int main(){
	float mediaf;
	printf("Digite media final do aluno: ");
	scanf(" %f", &mediaf);
	printf("O conceito deste aluno e %c", conceito(mediaf));
}

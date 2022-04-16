#include <stdio.h>
//Davi Costa Barroso, Questao 15
int main(){
	float chico = 1.50;
	float ze = 1.10;
	int ano = 0;
	while(chico>=ze){
		chico += 0.02;
		ze += 0.03;
		ano +=1;
	}
	printf("Ze demorou %d anos para ser maior do que Chico", ano);
	return 0;
}

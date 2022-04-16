#include <stdio.h>
//Davi Costa Barroso, Questao 05
int main(){
	float sal, salAumento, salF;
	printf("Salario do funcionario: ");
	scanf(" %f", &sal);
	salAumento = sal + (sal * 0.15);
	salF = salAumento - (salAumento * 0.08);
	printf("\nSalario inicial: %.2f", sal);
	printf("\nSalario com aumento: %.2f", salAumento);
	printf("\nSalario final com impostos: %.2f", salF);
	return 0;
}

#include <stdio.h>
//Davi Costa Barroso, Questao 14
int main(){
	float sal = 0; 
	float nfilhos = 0; 
	float somasal = 0; 
	float somafilhos = 0; 
	float tot = 0; 
	float ppsaltecem = 0; 
	float mediasal = 0; 
	float mediafilhos = 0; 
	float maiorsal = 0;
	float somaPessoasAteCem = 0;
	printf("Para encerrar o programa digite salario negativo.\n");
	printf("Informe o salario: ");
	scanf(" %f", &sal);
	while(sal >=0){
		printf("Informe numero de filhos: ");
		scanf(" %f", &nfilhos);
		somasal += sal;
		somafilhos += nfilhos;
		tot +=1;
		if(sal > maiorsal){
			maiorsal = sal;
		}
		if(sal <=100){
			somaPessoasAteCem += 1;
		}
		printf("\nInforme o salario: ");
		scanf(" %f", &sal);
	}
	if(tot !=0){
		ppsaltecem = (somaPessoasAteCem*100)/tot;
		mediasal = somasal / tot;
		mediafilhos = somafilhos / tot;
	}
	printf("\nMedia do salario da populacao: R$ %.2f", mediasal);
	printf("\nMedia do numero de filhos: %.2f", mediafilhos);
	printf("\nMaior salario: R$ %.2f", maiorsal);
	printf("\nPercentual de pessoas com salario ate R$100,00: %.2f %%", ppsaltecem);
	return 0;
}

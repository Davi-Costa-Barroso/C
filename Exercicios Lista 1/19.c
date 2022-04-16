#include <stdio.h>
//Davi Costa Barroso, Questao 19
int main(){
	char sexo;
	float sal;
	float somaSal = 0; 
	float mediaSal = 0;
	float tot = 0;
	int idade, maiorIdade, menorIdade, qtdMulherAteCem = 0;
	printf("O programa finalizara quando a idade for negativa!");
	printf("\nDigite idade: ");
	scanf(" %d", &idade);
	while(idade >=0){
		printf("Digite sexo [M/F]: ");
		scanf(" %c", &sexo);
		printf("Digite salario: ");
		scanf(" %f", &sal);
		if(tot == 0){
			maiorIdade = idade;
			menorIdade = idade;
		}else if(idade >= maiorIdade){
			maiorIdade = idade;
		}else if(idade < menorIdade){
			menorIdade = idade;
		}
		somaSal += sal;
		tot++;
		//Converte minusculo para maiusculo
		sexo = toupper(sexo);
		if((sexo == 'F') && (sal <=100)){
			qtdMulherAteCem++;
		}
		printf("\nDigite idade: ");
		scanf(" %d", &idade);
	}
	if(tot > 0){
		mediaSal = somaSal / tot;	
	}
	printf("\nA media dos salarios: %.2f", mediaSal);
	printf("\nA maior idade: %d \nA menor idade: %d", maiorIdade, menorIdade);
	printf("\nQuantidade de mulheres com salario ate cem: %d", qtdMulherAteCem);
	return 0;
}

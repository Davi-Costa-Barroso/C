#include <stdio.h>
//Davi Costa Barroso, Questao 21
int main(){
	int sexo; 
	int idade; 
	int maiorIdade, menorIdade; 
	int pessoasAteIdade;
	float cont;
	float somaIdadeHomem = 0;
	float ppAteIdade;
	float mediaIdadeHomem; 
	float mediaIdade;
	float qtdHomem = 0; 
	float qtdMulher = 0;
	float somaIdade = 0;
	float mediaAlturaMulher = 0; 
	float altura;
	float somaAlturaMulher = 0;
	for(cont = 0; cont<1000;cont++){
		printf("\nDigite sexo (0-Feminino,1-Masculino): ");
		scanf(" %d", &sexo);
		printf("Digite idade: ");
		scanf(" %d", &idade);
		printf("Digite altura: ");
		scanf(" %f", &altura);
		
		if(cont==0){
			maiorIdade = idade;
			menorIdade = idade;
		}
		else if(idade>=maiorIdade){
			maiorIdade = idade;
		}
		else if(idade < menorIdade){
			menorIdade = idade;
		}
		if(sexo == 0){
			qtdMulher +=1;
			somaAlturaMulher += altura;
		}
		if(sexo == 1){
			qtdHomem +=1;
			somaIdadeHomem += idade;
		}
		if((idade>18) && (idade<35)){
			pessoasAteIdade +=1;
		}
		somaIdade += idade;
		
	}
	mediaIdade = somaIdade / cont;
	mediaAlturaMulher = somaAlturaMulher / qtdMulher;
	mediaIdadeHomem = somaIdadeHomem / qtdHomem;
	ppAteIdade = (pessoasAteIdade * 100) / cont;
	
	printf("\nMenor idade do grupo: %d", menorIdade);
	printf("\nMaior idade do grupo: %d", maiorIdade);
	printf("\nMedia das idades do grupo: %.2f", mediaIdade);
	printf("\nMedia das altura das mulheres: %.2f", mediaAlturaMulher);
	printf("\nMedia das idades dos homens: %.2f", mediaIdadeHomem);
	printf("\nPercentual de pessoas entre 18 e 35 anos: %.2f %%", ppAteIdade);
	return 0;
}

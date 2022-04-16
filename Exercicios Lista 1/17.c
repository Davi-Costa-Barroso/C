#include <stdio.h>
//Davi Costa Barroso, Questao 17
int main(){
	int codAluno;
	float n1, n2, n3, mp, notamaior, notamenor, tot = 0, somamp, mediageral = 0;
	printf("Para finalizar o programa digite codigo do aluno negativo.\n");
	printf("Digite codigo do aluno: ");
	scanf(" %d", &codAluno);

	while(codAluno >=0){
		printf("Nota 1: ");
		scanf(" %f", &n1);
		printf("Nota 2: ");
		scanf(" %f", &n2);
		printf("Nota 3: ");
		scanf(" %f", &n3);
		if((n1 >= n2) && (n1 >= n3)){
			notamaior = n1;
			notamenor = n2 + n3;
		}else if((n2 >= n1) && (n2 >= n3)){
			notamaior = n2;
			notamenor = n1 + n3;
		}else{
			notamaior = n3;
			notamenor = n1 + n2;
		}
		mp = (notamaior * 4 + notamenor * 3)/10;
		printf("\nCodigo do aluno: %d", codAluno);
		printf("\nNota 1: %.2f \nNota2: %.2f \nNota3: %.2f\nA media ponderada e: %.2f", n1, n2, n3, mp);
		if(mp >=5){
			printf("\nAprovado");
		}else{
			printf("\nReprovado");
		}
		printf("\n------------------------");
		tot ++;
		somamp += mp;
		printf("\nDigite codigo do aluno: ");
		scanf(" %d", &codAluno);
	}
	if(tot > 0 ){
		mediageral = somamp / tot;
	}
	printf("-------------------------");
	printf("\nA media geral e: %.2f", mediageral);
	return 0;
}

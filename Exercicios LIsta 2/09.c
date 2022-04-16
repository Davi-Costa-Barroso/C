//Davi Costa Barroso, questao 09
#include <stdio.h>
float pesoIdeal(float alt, int sexo){
	float pesoIdeal;
	if(sexo == 0){
		pesoIdeal = (72.7 * alt) - 58;
	}else{
		pesoIdeal = (62.1 * alt) - 44.7;
	}
	return pesoIdeal;
}
int main(){
	float alt;
	int sexo;
	printf("Digite altura: ");
	scanf(" %f", &alt);
	printf("0 - para masculino\n1 - para feminino\n");
	printf("Digite sexo: ");
	scanf(" %d", &sexo);
	printf("O peso ideal e %.3f", pesoIdeal(alt, sexo));
}

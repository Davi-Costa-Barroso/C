#include <stdio.h>
//Davi Costa Barroso, Questao 03
int main(){
	float n1, n2, n3, mp;
	printf("Digite nota 1: ");
	scanf(" %f", &n1);
	printf("Digite nota 2: ");
	scanf(" %f", &n2);
	printf("Digite nota 3: ");
	scanf(" %f", &n3);
	mp = (n1*2 + n2*3 + n3 * 5)/10;
	printf("A media ponderada das notas e %.2f", mp);
	return 0;
}

#include <stdio.h>
//Davi Costa Barroso, Questao 02
float calcularMedia(float n1, float n2, float n3, char opcao){
	if(opcao == 'a'){
		return (n1+n2+n3)/3;
	}else{
		return (n1*5 + n2*3 + n3 * 2)/10;
	}
}
int main(){
	float n1, n2, n3;
	char opcao;
	printf("Digite primeira nota: ");
	scanf(" %f", &n1);
	printf("Digite segunda nota: ");
	scanf(" %f", &n2);
	printf("Digite terceira nota: ");
	scanf(" %f", &n3);
	printf("a - para calcular media aritmetica \np - para calcular media ponderada\nOpcao: ");
	scanf(" %c", &opcao);
	printf("A media calculada e: %.2f", calcularMedia(n1, n2, n3, opcao));
}

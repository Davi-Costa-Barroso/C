//Davi Costa Barroso, Questao 04
#include <stdio.h>
float conversorSegundos(int hr, int min, int seg){
	return (hr * (60 * 60)) + (min * 60) + seg;
}
int main(){
	int hr, min, seg;
	float conversor;
	printf("Digite tempo do processo em horas: ");
	scanf(" %d", &hr);
	printf("Digite tempo do processo em minutos: ");
	scanf(" %d", &min);
	printf("Digite tempo do processo em segundos: ");
	scanf(" %d", &seg);
	printf("Este tempo apenas em segundos e %.2f", conversorSegundos(hr, min, seg));
}

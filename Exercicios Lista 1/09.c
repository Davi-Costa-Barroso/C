#include <stdio.h>
//Davi Costa Barroso, Questao 09
int main(){
	int hr, min;
	float tempodigitado, seg;
	printf("Digite tempo em minutos: ");
	scanf(" %f", &tempodigitado);
	
	if(tempodigitado >= 60){
		hr = tempodigitado / 60;
		tempodigitado = tempodigitado - (hr*60);
	}
	if(tempodigitado < 60){
		min = tempodigitado;
		tempodigitado = tempodigitado - min;
	}
	if(tempodigitado < 1){
		seg = tempodigitado * 60;
	}
	printf("Hora: %d \nMinutos: %d \nSegundos: %.2f", hr, min, seg);
	return 0;
}

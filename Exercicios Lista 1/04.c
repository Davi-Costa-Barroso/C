#include <stdio.h>
//Davi Costa Barroso, Questao 04
int main(){
	//r é o Resto
	int diasSemAcidentes, anos, mes, dias, rAnos, rMes;
	printf("Quantidade de dias sem acidentes: ");
	scanf(" %d", &diasSemAcidentes);
	rAnos = diasSemAcidentes % 360;
	//Assumindo que cada mês possui 30 dias, um ano possui 360 dias.
	rMes = rAnos % 30;
	anos = diasSemAcidentes/360;
	mes = rAnos/30;
	dias = rMes;
	printf("Anos: %d \nMeses: %d \nDias: %d", anos, mes, dias);
	return 0;
}

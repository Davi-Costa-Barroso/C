#include <stdio.h>
//Davi Costa Barroso, Questao 10
int main(){
	int saque, cinquenta, dez, cinco, um, resto50, resto10, resto5;
	printf("Informe quantidade de saque: ");
	scanf(" %d", &saque);
	
	resto50 = saque % 50;
	resto10 = resto50 % 10;
	resto5 = resto10 % 5;
	
	cinquenta = saque / 50;
	dez = resto50 / 10;
	cinco = resto10 / 5;
	um = resto5;
	
	printf("Notas sacadas:");
	printf("\nCinquenta: %d \nDez: %d \nCinco: %d \nUm: %d", cinquenta, dez, cinco, um);
	return 0;
}
